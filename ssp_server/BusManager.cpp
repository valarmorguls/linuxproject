/* ************************************************************************
> File Name:     BusManager.cpp
> Author:        xupeng
 ************************************************************************/

#include <string.h>
#include <stdio.h>
#include "BusManager.h"
#include "Channel.h"


int BusManager::Init() {
    //shm Init
    //Bus Init
    printf("---- Init ----\n");
    shm_id = shmget((key_t)8998, 10240 * 8, IPC_CREAT | 0666);
    if (shm_id < 0) {
        printf("shmget failed: %d\n", shm_id);
        return -1; 
    }
    printf("---- shm_id:%d ----\n", shm_id);;
    shmp = (char *)shmat(shm_id, NULL, 0);
    if (*shmp < 0) {
        printf("shmat failed: %d\n", *shmp);
        return -2;
    }
    printf("--- shm_addr:%p ----\n", shmp);
    //不是创建的
    if (*shmp == 'Y') {
        BusInit();
    } else {
        *shmp = 'Y';
        BusInit();
        ChannelInit();
    }
    return 0;
}

int BusManager::ChannelShow() {
    for (int i = 0; i < 4; i++) {
        printf("Channel[%d].name:%s\n", i, channel_[i]->name);
        printf("Channel[%d].from:%d\n", i, *(channel_[i]->from));
        printf("Channel[%d].to  :%d\n", i, *(channel_[i]->to));
        printf("Channel[%d].used:%c\n", i, *(channel_[i]->block->used));
        printf("Channel[%d].size:%d\n", i, *(channel_[i]->block->size));
        printf("Channel[%d].data:%s\n", i, channel_[i]->block->data);
    }
    return 0;
}

int BusManager::BusInit() {
    //对齐操作
    char *curp = shmp + 1; // [0] -- 'Y'
    int size_channel = sizeof(Channel);
    int size_block = sizeof(BusBlock);
    printf("channel(%d) block(%d)\n", size_channel, size_block);
    channel_[0] = (Channel *)curp;
    curp += size_channel;
    channel_[1] = (Channel*)curp;
    curp += size_channel;
    channel_[2] = (Channel*)curp;
    curp += size_channel;
    channel_[3] = (Channel*)curp;
    curp += size_channel;

    channel_[0]->name = curp;
    curp += 256;

    channel_[0]->from = (int *)curp;
    curp += sizeof(int);

    channel_[0]->to = (int *)curp;
    curp += sizeof(int);

    channel_[0]->block = (BusBlock *)curp;
    curp += sizeof(BusBlock); //No star!!!

    channel_[0]->block->used = curp;
    ++curp;  

    channel_[0]->block->next = (BusBlock *)curp;
    curp += sizeof(BusBlock *);

    channel_[0]->block->size = (int *)curp;
    curp += sizeof(int);

    channel_[0]->block->data = curp;
    curp += 10240;

    for (int i = 1; i < 4; i++) {
        channel_[i]->name = curp;
        curp += 256;

        channel_[i]->from = (int *)curp;
        curp += sizeof(int);

        channel_[i]->to = (int *)curp;
        curp += sizeof(int);

        channel_[i]->block = (BusBlock *)curp;
        curp += sizeof(BusBlock); //No star!!!

        channel_[i]->block->used = curp;
        ++curp;  

        channel_[i]->block->next = (BusBlock *)curp;
        curp += sizeof(BusBlock *);

        channel_[i]->block->size = (int *)curp;
        curp += sizeof(int);

        channel_[i]->block->data = curp;
        curp += 10240;
    }

    return 0;
}

int BusManager::ChannelInit() {
    strncpy(channel_[0]->name, "User1 -> Server", 15);
    //sprintf(channel_[0].name, "Usr1toServer");
    *(channel_[0]->from) = 11;
    *(channel_[0]->to) = 21;
    *(channel_[0]->block->used) = 'N';
    *(channel_[0]->block->size) = 0;
    memset(channel_[0]->block->data, 0, 10240);

    strncpy(channel_[1]->name, "User2 -> Server", 15);
    //sprintf(channel_[0].name, "Usr1toServer");
    *(channel_[1]->from) = 12;
    *(channel_[1]->to) = 21;
    *(channel_[1]->block->used) = 'N';
    *(channel_[1]->block->size) = 0;
    memset(channel_[1]->block->data, 0, 10240);

    strncpy(channel_[2]->name, "Server -> User1", 15);
    //sprintf(channel_[0].name, "Usr1toServer");
    *(channel_[2]->from) = 21;
    *(channel_[2]->to) = 11;
    *(channel_[2]->block->used) = 'N';
    *(channel_[2]->block->size) = 0;
    memset(channel_[2]->block->data, 0, 10240);

    strncpy(channel_[3]->name, "Server -> User2", 15);
    //sprintf(channel_[0].name, "Usr1toServer");
    *(channel_[3]->from) = 21;
    *(channel_[3]->to) = 12;
    *(channel_[3]->block->used) = 'N';
    *(channel_[3]->block->size) = 0;
    memset(channel_[3]->block->data, 0, 10240);

    /*
    sprintf(channel_[1].name, "Usr2toServer");
    channel_[1].from = 12; 
    channel_[1].to = 21;
    memset(&channel_[1].block, 0, sizeof(BusBlock));

    sprintf(channel_[2].name, "ServerToSvr1");
    channel_[2].from = 21; 
    channel_[2].to = 11;
    memset(&channel_[2].block, 0, sizeof(BusBlock));

    sprintf(channel_[3].name, "ServerToSvr2");
    channel_[3].from = 21; 
    channel_[3].to = 22;
    memset(&channel_[3].block, 0, sizeof(BusBlock));
*/
    return 0;
}

int BusManager::ShmDetach() {
    int ret = shmdt(shmp);
    if (ret < 0) {
        return -1;
    }
    return 0;
}

int BusManager::ShmRemove() {
    int ret = shmctl(shm_id, IPC_RMID, 0);
    return 0;
}

int BusManager::CheckRecv(int target_id) {
    for (int i = 0; i < 4; i++) {
        if (*(channel_[i]->to) == target_id) {
            if (*(channel_[i]->block->used) == 'Y') {
                return *(channel_[i]->from);
            }
        }
    }
    return -1;
}

Channel* BusManager::GetChannel(int from, int to) {
    for (int i = 0; i < 4; i++) {
        if (*(channel_[i]->from) == from && *(channel_[i]->to) == to) {
            return channel_[i];
        }
    }
    return NULL;
}

char *BusManager::Recv(int from, int to) {
    Channel *mchannel = GetChannel(from, to);
    if (mchannel != NULL) {
        if (*(mchannel->block->used) == 'Y') {
            *(mchannel->block->used)= 'N';
            return mchannel->block->data;
        }
    }
    return NULL;
    /*
    for (int i = 0; i < 4; i++) {
        if (channel_[i].from == from && channel_[i].to == to) {
            if (channel_[i].block.used == 1) {
                return channel_[i].block.data;
            } else {
                return NULL;
            }
        }
    }
    return NULL;
    */
}

int BusManager::RecvSize(int from, int to) {
    Channel *mchannel = GetChannel(from, to);
    if (mchannel != NULL) {
        return *(mchannel->block->size);
    }
    return 0;
}

int BusManager::Clear(int from, int to) {
    Channel *mchannel = GetChannel(from, to);
    if (mchannel != NULL) {
        if (*(mchannel->block->used) == 'N') {
            *(mchannel->block->size) = 0;
            memset(mchannel->block->data, 0, *(mchannel->block->size));
            return 0;
        }
    }
    return -1;
}

int BusManager::Send(int from, int to, char *data, int size) {
    Channel *mchannel = GetChannel(from, to);
    if (mchannel != NULL && *(mchannel->block->used) == 'N') {
        *(mchannel->block->size) = size;
        strncpy(mchannel->block->data, data, size);
        *(mchannel->block->used) = 'Y';
        return 0;
    }
    return -1;
}

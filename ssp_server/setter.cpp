/* ************************************************************************
> File Name:     setter.cpp
> Author:        xupeng
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>

int main() {
    int shm_id = shmget((key_t)8998, 10240, IPC_CREAT | 0666);
    if (shm_id < 0) {
        printf("shmget failed : %d\n", shm_id);
        return 0;
    }
    printf("shm_id = %d\n", shm_id);
    char *shmp = (char *)shmat(shm_id, NULL, 0);
    if (*shmp < 0) {
        printf("shmat failed: %d\n", *shmp);
        return 0;
    }
    printf("shmp addr = %p\n", shmp);

    while (1) {
        scanf("%s", shmp);
        if (strcmp(shmp, "quit") == 0) {
            break;
        }
    }
    shmdt(shmp);
    return 0;
}

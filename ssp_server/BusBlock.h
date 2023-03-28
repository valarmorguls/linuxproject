/* ************************************************************************
> File Name:     BusBlock.h
> Author:        xupeng
 ************************************************************************/

#ifndef _BUS_BLOCK_H
#define _BUS_BLOCK_H

//共享内存
class BusBlock {
public:
    char* used;
    BusBlock* next;
    int* size;
    char *data;
};

#endif

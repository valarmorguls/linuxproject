/* ************************************************************************
> File Name:     Channel.h
> Author:        xupeng
 ************************************************************************/

#ifndef _CHANNEL_H
#define _CHANNEL_H

#include "BusBlock.h"
class Channel {
public:
    char *name;
    int *from;
    int *to;
    BusBlock* block;
};

#endif

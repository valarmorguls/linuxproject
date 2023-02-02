/*************************************************************************
	> File Name: MessageInfo.h
	> Author: 
	> Mail: 
	> Created Time: Thu 02 Feb 2023 02:26:40 PM CST
 ************************************************************************/

#ifndef _MESSAGEINFO_H
#define _MESSAGEINFO_H

#include "string.h"
#include "common/macro.h"

class MessageInfo {
private:
    GETSETVAR(int, user_id)
    GETSETVAR(int, message_id)
    GETSETVAR(int, publish_time)
    GETSETSTR(1024, content)
};

#endif

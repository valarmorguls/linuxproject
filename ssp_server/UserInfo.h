/*************************************************************************
	> File Name: UserInfo.h
	> Author: 
	> Mail: 
	> Created Time: Thu 02 Feb 2023 02:08:11 PM CST
 ************************************************************************/

#ifndef _USERINFO_H
#define _USERINFO_H

#include "common/macro.h"

class UserInfo {
public:
    //TODO
private:
    GETSETVAR(int, user_id)
    GETSETSTR(256, user_name)
    GETSETSTR(256, nick_name)
    GETSETVAR(int, reg_time)
    GETSETVAR(int, from)
    GETSETVAR(int, login_time)
    GETSETVAR(int, last_login_time)
    GETSETVAR(int, fresh_time)
    GETSETSTR(256, password)
    GETSETVAR(int, logout_time)
    GETSETVAR(int, db_flag)
};


#endif

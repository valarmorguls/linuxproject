/*************************************************************************
	> File Name: UserManager.h
	> Author: 
	> Mail: 
	> Created Time: Thu 02 Feb 2023 02:58:20 PM CST
 ************************************************************************/

#ifndef _USERMANAGER_H
#define _USERMANAGER_H

#include <stdio.h>
#include "string.h"
#include "common/macro.h"
#include "UserInfo.h"

class UserManager {
public:
    int Start();
    int Proc();
    int Restart();
    int Shutdown();

public:
    UserInfo *GetUser(int user_id);
    int CheckExist(int user_id);
    int CreateUser(const char *user_name, const char *password, int from, int reg_time);
    int DeleteUser(int user_id);
    int SaveUser(); //todo
    int LoginCheck(const char *user_name, const char *password);
    int UserLogout(int user_id, int time_now);
    int GetUserIdByUserName(const char* user_name);
    int UpdateLoginTime(int user_id, int time_now);
    //int UpdateUserLogoutTime(int user_id, int time_now);
    //int UpdateUserFreshTime(int user_id, int time_now);
private:
    UserInfo users_[10240];
    GETSETVAR(int, user_count);
    GETSETVAR(int, cur_user_id);

};

#endif

/*************************************************************************
	> FileName: DbManager.h
	> Author  : Li Chao
 ************************************************************************/

#ifndef _DBMANAGER_H
#define _DBMANAGER_H

#include "mysql/mysql.h"
#include <string>
#include <iostream>
#include "UserInfo.h"

using namespace std;

class DbManager {
private:
	GETSETVAR(int,transection)
private:
	MYSQL *conn;
	MYSQL_RES *result;
	MYSQL_ROW row;
public:
	int Init();
	int execSql(string sql);
	int GetUsersBegin();
	int GetUsersOneByOne(UserInfo* user);
	int GetUsersEnd();
	int GetCurUserId();
	int InsertUser(UserInfo* user);
};

#endif

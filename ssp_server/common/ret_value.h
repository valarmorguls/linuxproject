/*************************************************************************
	> File Name: ret_value.h
	> Author: 
	> Mail: 
	> Created Time: Thu 02 Feb 2023 03:09:29 PM CST
 ************************************************************************/

#ifndef _RET_VALUE_H
#define _RET_VALUE_H

#define SUCCESS 0

#define USER_NOT_EXIST  100
#define USER_EXIST 101
#define WRONG_PASSWORD 102
#define USER_TOO_MUCH 103

#define NOT_FRIEND 200
#define ALREADY_FRIEND 201
#define FRIEND_TOO_MUCH 202
#define FRIEND_INDEX_WRONG 203


#define NOT_BLACK 211
#define ALREADY_BLACK 212
#define BLACK_TOO_MUCH 213
#define BLACK_INDEX_WRONG 214


#define MESSAGE_NOT_EXIST 300
#define MESSAGE_TOO_MUCH 301

#define PHOTO_EXIST 400
#define PHOTO_TOO_MUCH 401
#define PHOTO_NOT_EXIST 402

#define FLAG_INSERT 501
#define FLAG_DELETE 502
#define FLAG_UPDATE 503

#define RELATION_NOT_EXIST 600
#define RELATION_TOO_MUCH 601
#define RELATION_EXIST 602

#define DB_CONN_INIT_FAIL 701
#define DB_CONN_CONNECT_FAIL 702
#define DB_QUERY_FAIL 703
#define DB_BUSY 704
#define DB_NO_MORE_DATA 705


#endif

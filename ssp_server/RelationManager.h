/*************************************************************************
	> File Name: RelationManager.h
	> Author: 
	> Mail: 
	> Created Time: Fri 03 Feb 2023 02:47:42 PM CST
 ************************************************************************/

#ifndef _RELATIONMANAGER_H
#define _RELATIONMANAGER_H

#include "RelationInfo.h"
#include "common/macro.h"

class RelationManager {
public:
    int Start();
    int Proc();
    int Shutdown();
    int Restart();

public:
    int UserRelationInit(int user_id);
    RelationInfo* GetRelation(int user_id);
    int AddFriend(int user_id, int other_id);
    int DelFriend(int user_id, int other_id);
    int AddBlack(int user_id, int other_id);
    int DelBlack(int user_id, int other_id);

private:
    RelationInfo relations_[10240];
    GETSETVAR(int, relation_count);
};

#endif

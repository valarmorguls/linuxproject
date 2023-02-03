/*************************************************************************
	> File Name: RelationManager.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 03 Feb 2023 02:52:28 PM CST
 ************************************************************************/

#include <stdio.h>
#include "RelationManager.h" 
#include "common/ret_value.h"

int RelationManager::Start() {
    printf("[   INFO ] Relation Manager Start\n");
    return SUCCESS;
}

int RelationManager::Proc() {
    printf("[   INFO ] Relation Manager Proc\n");
    return SUCCESS;
}

int RelationManager::Shutdown() {
    printf("[   INFO ] Relation Manager Shutdown\n");
    return SUCCESS;
}

int RelationManager::Restart() {
    printf("[   INFO ] Relation Manager Restart\n");
    return SUCCESS;
}

int RelationManager::UserRelationInit(int user_id) {
    for (int i = 0; i < relation_count_; i++) {
        if (relations_[i].user_id() == user_id) {
            return RELATION_EXIST;
        }
    }
    if (relation_count_ < 10239) {
        relations_[relation_count_].set_user_id(user_id);
        relation_count_++;
        return SUCCESS;
    } else {
        return RELATION_TOO_MUCH;
    }
}

RelationInfo* RelationManager::GetRelation(int user_id) {
    for (int i = 0; i < relation_count_; i++) {
        if (relations_[i].user_id() == user_id) {
            return &relations_[i];
        }
    }
    return NULL;
}

int RelationManager::AddFriend(int user_id, int other_id) {
    RelationInfo* relation = GetRelation(user_id);
    if (relation == NULL) {
        return RELATION_NOT_EXIST;
    }
    int ret = relation->AddFriend(other_id);
    return ret;
}

int RelationManager::DelFriend(int user_id, int other_id) {
    RelationInfo* relation = GetRelation(user_id);
    if (relation == NULL) {
        return RELATION_NOT_EXIST;
    }
    int ret = relation->DeleteFriend(other_id);
    return ret;
}

int RelationManager::AddBlack(int user_id, int other_id) {
    RelatinInfo *relation = GetRelation(user_id);
    if (relation == NULL) {
        return RELATION_NOT_EXIST; 
    }
    int ret = relation->AddBlack(other_id);
    return ret;
}

int RelationManager::DelBlack(int user_id, int other_id) {
    RelationInfo *relation = GetRelation(user_id);
    if (relation == NULL) {
        return RELATION_NOT_EXIST;
    }
    int ret = relation->DeleteBlack(other_id);
    return ret;
}

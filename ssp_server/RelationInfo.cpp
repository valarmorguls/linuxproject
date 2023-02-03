/*************************************************************************
	> File Name: RelationInfo.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 03 Feb 2023 01:48:59 PM CST
 ************************************************************************/

#include "RelationInfo.h"
#include "common/ret_value.h"

int RelationInfo::CheckFriend(int other_id) {
    for (int i = 0; i < friend_count_; i++) {
        if (friend_list_[i] == other_id) {
            return SUCCESS;
        }
    }  
    return NOT_FRIEND;
}

int RelationInfo::CheckBlack(int other_id) {
    for (int i = 0; i < black_count_; i++) {
        if (black_list_[i] == other_id) {
            return SUCCESS;
        }
    }
    return NOT_BLACK;
}

int RelationInfo::AddFriend(int other_id) {
    if (CheckFriend(other_id) == SUCCESS) {
        return ALREADY_FRIEND;
    } 
    if (friend_count_ < 10239) {
        friend_list_[friend_count_] = other_id;
        friend_count_++;
    } else {
        return FRIEND_TOO_MUCH;
    }
    return SUCCESS;
}

int RelationInfo::AddBlack(int other_id) {
    if (CheckBlack(other_id) == SUCCESS) {
        return ALREADY_BLACK;
    }
    if (black_count_ < 10239) {
        black_list_[black_count_] = other_id;
        black_count_++;
    } else {
        return BLACK_TOO_MUCH;
    }
    return SUCCESS;
}

int RelationInfo::DeleteFriend(int other_id) {
    if (CheckFriend(other_id) == SUCCESS) {
        for (int i = 0; i < friend_count_; i++) {
            if (friend_list_[i] == other_id) {
                friend_list_[i] = -1;
                for (int j = i; j < friend_count_ - 1; j++) {
                    friend_list_[j] = friend_list_[j + 1];
                }
            }
        }
        friend_count_--;
    } else {
        return NOT_FRIEND;
    }
    return SUCCESS;
}

int RelationInfo::DeleteBlack(int other_id) {
    if (CheckBlack(other_id) == SUCCESS) {
        for (int i = 0; i < black_count_; i++) {
            if (black_list_[i] == other_id) {
                black_list_[i] = -1;
                for (int j = i; j < black_count_ - 1; j++) {
                    black_list_[j] = black_list_[j + 1];
                }
            }
        }
        black_count_--;
    } else {
        return NOT_BLACK;
    }
    return SUCCESS;
}

int RelationInfo::GetFriendByIndex(int index) {
    if (index < 0 || index > friend_count_) {
        return FRIEND_INDEX_WRONG;
    }
    return friend_list_[index];
}

int RelationInfo::GetBlackByIndex(int index) {
    if (index < 0 || index > black_count_) {
        return BLACK_INDEX_WRONG;
    }
    return black_list_[index];
}

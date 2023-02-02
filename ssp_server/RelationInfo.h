/*************************************************************************
	> File Name: RelationInfo.h
	> Author: 
	> Mail: 
	> Created Time: Thu 02 Feb 2023 02:29:44 PM CST
 ************************************************************************/

#ifndef _RELATIONINFO_H
#define _RELATIONINFO_H

class RelationInfo {
public:
    int CheckFriend(int other_id);
    int CheckBlack(int other_id);
    int AddFriend(int other_id);
    int AddBlack(int other_id);
    int DeleteFriend(int other_id);
    int DeleteBlack(int other_id);
    int GetFriendByIndex(int index);
    int GetBlackByIndex(int index);
    
private:
    GETSETVAR(int, user_id)
    GETSETVAR(int, friend_id)
    int friend_list_[10240];
    GETSETVAR(int, black_id)
    int black_list_[10240];
}

#endif

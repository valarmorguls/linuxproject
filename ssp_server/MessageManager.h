/*************************************************************************
	> File Name: MessageManager.h
	> Author: 
	> Mail: 
	> Created Time: Thu 02 Feb 2023 03:54:36 PM CST
 ************************************************************************/

#ifndef _MESSAGEMANAGER_H
#define _MESSAGEMANAGER_H

#include "string.h"
#include "common/macro.h"
#include "MessageInfo.h"
#include <vector>
#include <map>

using namespace std;
class MessageManager {
public:
    void Start();
    void Proc();
    void Shutdown();
    void Restart();

public:
    MessageInfo* GetMessage(int user_id, int message_id);
    MessageInfo* GetMessage(int message_id);
    int PublishMessage(MessageInfo message);
    int DeleteMessage(int message_id);
    int PushUserMessagesId(int user_id, int message_id);
    vector<int> GetMessageIds(int user_id);

private:
    MessageInfo messages_[10240];
    GETSETVAR(int, message_count)
    GETSETVAR(int, cur_message_id)
    map<int, vector<int>> user_messages_;
};

#endif

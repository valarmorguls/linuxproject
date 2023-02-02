/*************************************************************************
	> File Name: MessageManager.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 02 Feb 2023 04:00:08 PM CST
 ************************************************************************/

#include "MessageManager.h"
#include "common/ret_value.h"

using namespace std;

void MessageManager::Start() {
    return ;
}

void MessageManager::Proc() {
    return ;
}

void MessageManager::Shutdown() {
    return ;
}

void MessageManager::Restart() {
    return ;
}

MessageInfo* MessageManager::GetMessage(int user_id, int message_id) {
    for (int i = 0; i < message_count_; i++) {
        if (messages_[i].user_id() == user_id && messages_[i].message_id() == message_id) {
            return &messages_[i];
        }
    }
    return NULL;
}

MessageInfo* MessageManager::GetMessage(int message_id) {
    for (int i = 0; i < message_count_; i++) {
        if (messages_[i].message_id() == message_id) {
            return &messages_[i];
        }
    }
    return NULL;
}

int MessageManager::PublishMessage(MessageInfo message) {
    if (message_count_ == 10239) {
        return MESSAGE_TOO_MUCH;
    } 
    int ret_message_id = cur_message_id(); 
    messages_[message_count_].set_message_id(cur_message_id());
    messages_[message_count_].set_user_id(message.user_id());
    messages_[message_count_].set_publish_time(message.publish_time());
    messages_[message_count_].set_content(message.content());
    cur_message_id_++;
    message_count_++;
    return ret_message_id;
}

int MessageManager::DeleteMessage(int message_id) {
    for (int i = 0; i < message_count_; i++) {
        if (messages_[i].message_id() == message_id) {
            messages_[i].set_message_id(messages_[message_count_ - 1].message_id());
            messages_[i].set_user_id(messages_[message_count_ - 1].user_id());
            messages_[i].set_publish_time(messages_[message_count_ - 1].publish_time());
            messages_[i].set_content(messages_[message_count_ - 1].content());
            message_count_--;
            return SUCCESS;
        }
    }
    return MESSAGE_NOT_EXIST;
}

vector<int> MessageManager::GetMessageIds(int user_id) {
    map<int, vector<int>>::iterator iter;
    iter = user_messages_.find(user_id);
    if (iter != user_messages_.end()) {
        return iter->second;
    }
    return vector<int>();
}

int MessageManager::PushUserMessagesId(int user_id, int message_id) {
    map<int, vector<int> >::iterator iter;
    iter = user_messages_.find(user_id);
    if (iter == user_messages_.end()) {
        vector<int> mess_ids;
        mess_ids.push_back(message_id);
        user_messages_.insert(pair<int, vector<int> > (user_id, message_id));
        return 1;
    }
    iter->second.push_back(message_id);
    return 0;
}

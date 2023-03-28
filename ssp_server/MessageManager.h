/*************************************************************************
	> FileName: MessageManager.h
	> Author  : Li Chao
 ************************************************************************/

#ifndef _MESSAGEMANAGER_H
#define _MESSAGEMANAGER_H
#include "common/macro.h"
#include "MessageInfo.h"
#include <map>
#include <vector>
using namespace std;
class MessageManager {
private:
	MessageInfo messages_[10240];
	GETSETVAR(int,message_count)
	GETSETVAR(int,cur_message_id)
	map<int,vector<int> > user_messages_;

public:
	void Start();
	void Proc();
	void Shutdown();
	void Restart();

public:
	MessageInfo* GetMessage(int user_id,int message_id);
	MessageInfo* GetMessage(int message_id);
	int PublishMessage(MessageInfo message);
	int DeleteMessage(int message_id);
	int PushUserMessageId(int user_id,int message_id);
	vector<int> GetMessageIds(int user_id);
};


#endif

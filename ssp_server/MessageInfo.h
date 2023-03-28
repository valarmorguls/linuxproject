#include "string.h"
#include "common/macro.h"

class MessageInfo {
	GETSETVAR(int,user_id)
	GETSETVAR(int,message_id)
	GETSETVAR(int,publish_time)
	GETSETSTR(1024,content)
};

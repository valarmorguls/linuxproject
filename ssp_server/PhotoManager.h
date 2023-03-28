/*************************************************************************
	> FileName: PhotoManager.h
	> Author  : XUPENG 
 ************************************************************************/

#ifndef _PHOTOMANAGER_H
#define _PHOTOMANAGER_H
#include "PhotoInfo.h"

class PhotoManager {
private:
	PhotoInfo photos_[10240];
	GETSETVAR(int,photo_count)

public:
	void Start();
	void Proc();
	void Shutdown();
	void Restart();

public:
	int CreatePhoto(int user_id);
	PhotoInfo* GetPhoto(int user_id);
	int UpdatePhoto(int user_id,int publisher_id,int publish_time,int publish_message_id);
};

#endif

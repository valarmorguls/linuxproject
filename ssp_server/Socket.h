/*************************************************************************
	> File Name: Socket.h
	> Author: 
	> Mail: 
	> Created Time: Fri 03 Feb 2023 03:13:14 PM CST
 ************************************************************************/

#ifndef _SOCKET_H
#define _SOCKET_H

#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include "Config.h"

class SspSocket {
public:
    int server_sock;
    struct socketaddr_in server_addr;
    int client_sock;
    struct socketaddr_in client_addr;
    int accept_flag;

    Config config;
    int Init();
    int SocketInit();
    int SocketAccept();
    int SocketCheckRecv();
    int SocketSend(int send_size);
    int ClientClose();
    int ServerClose();
    int ClientSocketInit();
    int show_send_buffer(int size);
    int show_recv_buffer(int size);
};

#endif

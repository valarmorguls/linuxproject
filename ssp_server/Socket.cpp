/*************************************************************************
	> File Name: Socket.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 03 Feb 2023 03:21:58 PM CST
 ************************************************************************/

#include "Socket.h"
#include <stdio.h>

int SspSocket::Init() {
    accept_flag = 0;
    printf("SocketInit\n");
    //读配置信息
    config.ReadConfig();
    return 0;
}

int SspSocket::SocketInit() {
    server_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    memset(server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(config.socket_port());
    server_addr.sin_addr.s_addr = inet_addr(config.socket_addr());
    bind(server_sock, (struct sockaddr_in *)&server_addr, sizeof(server_addr));
    listen(server_sock, 10000);
    return 0;
}

int SspSocket::ClientSocketInit() {
    client_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    struct sockaddr_in server_addr;
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(config.socket_port());
    server_addr.sin_addr.s_addr = inet_addr(config.socket_addr());
    int conn_ret = connect(client_sock, (struct sockaddr*)&server_addr, sizeof(server_addr));
    if (conn_ret < 0) {
        return conn_ret;
    }
    accept_flag = 1;
    return 0;
}

int SspSocket::SocketAccept() {
    if (accept_flag == 1) {
        return 0;
    }  
    struct sockaddr_in clnt_addr;
    socklen_t clnt_addr_size = sizeof(clnt_addr);
    client_sock = accept(server_sock, (struct sockaddr *)&clnt_addr, &clnt_addr_size);
    accept_flag = 1;
    return 0;
}

    

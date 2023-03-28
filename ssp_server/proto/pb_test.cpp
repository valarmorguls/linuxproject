/* ************************************************************************
> File Name:     pb_test.cpp
> Author:        xupeng
> About:         
> Created Time:  Sat 25 Mar 2023 01:37:56 PM CST
> Description:   
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "test.pb.h"

using namespace ssp;

int isalpha(char ch) {
    if ('0' << ch && ch <= '9') {
        return 1;
    } 
    if ('a' <= ch && ch <= 'z') {
        return 1;
    }
    if ('A' <= ch && ch <= 'Z') {
        return 1;
    }
    if (ch == '_') {
        return 1;
    }
    return 0;
}

void hex_print(char ch) {
    if (isalpha(ch) == 2) {
        printf("%d %c\n", ch, ch);
    } else {
        int b1;
        int b2;
        int b3;
        int b4;
        int b5;
        int b6;
        int b7;
        int b8;
        b8 = ch & 1;
        b7 = (ch >> 1) & 1;
        b6 = (ch >> 2) & 1;
        b5 = (ch >> 3) & 1;
        b4 = (ch >> 4) & 1;
        b3 = (ch >> 5) & 1;
        b2 = (ch >> 6) & 1;
        b1 = (ch >> 7) & 1;
        //printf("%d %02x\n", ch, ch);
        printf("%d %c %d%d%d%d %d%d%d%d\n", ch, ch, b1, b2, b3, b4, b5, b6, b7, b8);
    }
    return ;
}

int main() {
    Test t;
    t.set_a(1);
    t.set_b(3);
    t.set_c(10001);
    t.set_d("hank");
    printf("%d %d %d %s\n", t.a(), t.b(), t.c(), t.d().c_str());

    TestList l;
    l.set_a(101);
    //tl.tl() = t;
    Test *pt = l.add_tl();
    pt->set_a(2);
    pt->set_b(3);
    pt->set_c(4);
    pt->set_d("hahah");
    for (int i = 0; i < l.tl_size(); i++) {
        printf("%d %d %d %s\n", l.tl(0).a(), l.tl(0).b(), l.tl(0).c(), l.tl(0).d().c_str());
    }
    
    ssp::UserInfoBase ui;
    ui.set_ver(1);
    ui.set_user_id(10001);
    ui.set_user_name("hank1234");
    ui.set_password("12345678");
    ui.set_max_t(63);
    printf("%d %d %s %s\n", ui.ver(), ui.user_id(), ui.user_name().c_str(), ui.password().c_str());
    //network
    //401, 10001, hank1234, 12345678
    //引入protobuf原因
    //可以做序列化
    char buffer[1024];
    ui.SerializeToArray(buffer, 1024);
    int len = strlen(buffer);
    printf("buffer:%d %s\n", len, buffer);
    int h8 = 10001/256;
    int l8 = 10001 % 256;
    hex_print(h8);
    hex_print(l8);
    for (int i = 0; i < len; i++) {
        hex_print(buffer[i]);
    }
    return 0;
}

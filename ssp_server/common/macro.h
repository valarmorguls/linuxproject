/*************************************************************************
	> File Name: macro.h
	> Author: 
	> Mail: 
	> Created Time: Thu 02 Feb 2023 02:12:10 PM CST
 ************************************************************************/

#ifndef _MACRO_H
#define _MACRO_H

#define GETSETVAR(type, name) \
public: \
    const type& name() const { \
        return name##_; \
    } \
    void set_##name(const type& value) { \
        name##_ = value; \
    } \
private: \
    type name##_; \

#define GETSETSTR(size, name) \
public: \
    const char* name() const { \
        return name##_; \
    }  \
    void set_##name(const char *value) { \
        strncpy(name##_, value, size); \
    } \
private: \
    char name##_[size]; \

#endif

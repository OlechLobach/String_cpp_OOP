#ifndef STRING_H
#define STRING_H
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>

class String {
private:
    char* str;

public:
    String();
    String(const char* s);
    String(const String& other);
    ~String();

    String operator*(const String& other) const;  
    void display() const;
};
#endif
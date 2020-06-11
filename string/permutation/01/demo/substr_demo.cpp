//
// Created by chugang on 2020/6/10.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string string1 = "hello";
    string string2 = string1.substr(0, string1.length() - 1) + string1.substr(string1.length(), string1.length());
    cout << string2;

    return 0;
}

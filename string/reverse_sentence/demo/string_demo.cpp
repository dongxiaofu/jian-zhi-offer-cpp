//
// Created by chugang on 2020/5/26.
//
#include <iostream>

using namespace std;
/*
 * todo 字符串的长度问题，不清楚。
 * char str[] = "C program"; 字符串长度为 9，数组长度为 10。
 */
int main() {
    string string1 = "a";
    cout << sizeof(string1) << endl;
    cout << string1.size() << endl;
    cout << string1[0] << endl;
    cout << int(string1[string1.size()]) << endl;
    cout << "\n=====================" << endl;
    char string2[] = "a";
    cout << sizeof(string2) << endl;
    cout << strlen(string2) << endl;
    cout << string2[0] << endl;
    cout << int(string2[strlen(string2)]) << endl;
    cout << "\n=====================" << endl;
    char *string3 = "a";
//    string3[0] = {'a'};
    cout << sizeof(string3) << endl;
    cout << strlen(string3) << endl;
    cout << string3[2] << endl;
    int index = strlen(string3);
    cout << "index:" << index << endl;
    cout << int(string3[index]) << endl;
    return 0;
}

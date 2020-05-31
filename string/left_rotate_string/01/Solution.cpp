//
// Created by chugang on 2020/5/31.
//
/***************************************
 * 左旋转字符串，时间复杂度O(N)。空间复杂度极大。
 * 思路：
 * 1.声明三个string类型变量string1,string2,
 * string3。分别存储要旋转的前n个字符，剩余字符，
 * 新字符串。
 * 2.通过遍历旧字符串0-n(不含n)，n-size得到
 * string1,string2.
 * 3.string3 = string2 + string1。
 * 常规解法。
 ***************************************/
#include "Solution.h"

string Solution::LeftRotateString(string str, int n) {
    int length = str.size();
    if (n > length) {
        return nullptr;
    }
    string string1;
    string string2;
    string string3;
    int i;
    for (i = 0; i < n; i++) {
        string1 += str[i];
    }
    for (; i < length; i++) {
        string2 += str[i];
    }
    string3 = string2 + string1;
    return string3;
}

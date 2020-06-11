//
// Created by chugang on 2020/6/11.
//
/**
 * 来自leetcode，比01、02的限制更多些。
 */
#include "Solution.h"

int Solution::strToInt(string str) {
    int len = str.length();
    if (len == 0) {
        return 0;
    }
    int i = 0;
    while (str[i] == ' ') { i++; };
    int sign = -1;
    if (str[i] == '+') {
        sign = 1;
        i++;
    } else if (str[i] == '-') {
        sign = -1;
        i++;
    }
    if (str[i] < '0' || str[i] > '9') {
        return 0;
    }
    int num = 0;
    for (; i < len; i++) {
        // "123abc"转为123，01转为0
        if (str[i] < '0' || str[i] > '9') {
            return sign * num;      // 这里也不能漏掉符号。借助IDE的断点调试，我才知道错误。
        }
        int modNum = str[i] - '0';
        if (isOutOfRange(num, modNum)) {
            return sign > 0 ? INT_MAX : INT_MIN;
        }
        num = (num << 1) + (num << 3) + modNum;
    }
    return sign * num;
}

bool Solution::isOutOfRange(int num, int modNum) {
    if (num > INT_MAX / 10 || (num == INT_MAX / 10 && modNum > INT_MAX % 10)) {
        return true;
    }
    return false;
}

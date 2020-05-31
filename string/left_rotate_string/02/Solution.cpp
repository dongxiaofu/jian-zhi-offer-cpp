//
// Created by chugang on 2020/5/31.
//
/***************************************
 * 左旋转字符串，时间复杂度O(N)。没有使用额外
 * 空间，在原字符串移动。
 * 思路：
 * 1.从第二个字符开始，每个字符都往前移动一位。
 * 然后将第一个字符放入末尾空出来的那个位置。
 * 2.执行第一步n次。
 ***************************************/
#include "Solution.h"

string Solution::LeftRotateString(string str, int n) {
    int length = str.size();    // todo 没有统计\0
    if (n > length) {
        return nullptr;
    }
    for (int i = 0; i < n; i++) {
        char c = str[0];
        for (int j = 1; j < length; j++) {
            str[j - 1] = str[j];
        }
        str[length - 1] = c;
    }
    return str;
}

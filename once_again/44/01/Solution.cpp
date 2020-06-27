//
// Created by chugang on 2020/6/27.
//
/****************************************************
 * 数字序列中某一位的数字
 * 数字以0123456789101112131415…的格式序列化到一个字符序列中。
 * 在这个序列中，第5位（从下标0开始计数）是5，第13位是1，第19位
 * 是4，等等。
 * 请写一个函数，求任意第n位对应的数字num。
 * todo 比较多细节理解不了。
 * 思路：
 * 1.计算出num有几位数字（比如，有2位，100)。
 * 2.计算出num的值：start + n - 1，start = 0。
 * 3.计算出第n位是num的哪个数字：
 * 3.1.num[(n-1) % 2]。<====== todo 不是一眼就能看出来
 * 3.1.1.todo 我理解不了。
 ****************************************************/
#include "Solution.h"

int Solution::findNthDigit(int n) {
    int start = 1;
    int digit = 1;
    long count = 9;
    while (n > count) {
        n -= count;
        start *= 10;
        digit++;
        count = (long) start * digit * 9;   // 考虑到溢出问题，count类型为long
    }
    int num = start + (n - 1) / digit;  // todo 不能透彻理解
    string numStr = to_string(num);
    int res = numStr[(n - 1) % digit] - '0';    // 将字符数字转为数字的方法，与'0'相减。
    return res;
}

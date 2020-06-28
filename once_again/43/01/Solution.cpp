//
// Created by chugang on 2020/6/28.
//
/****************************************************
 * 1～n整数中1出现的次数
 * 输入一个整数 n ，求1～n这n个整数的十进制表示中1出现的次数。
 * 例如，输入12，1～12这些整数中包含1 的数字有1、10、11和12，1
 * 一共出现了5次。
 * 思路：暴力解法。
 ****************************************************/
#include "Solution.h"

int Solution::countDigitOne(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += countDigitOneOfNum(i);
    }
    return total;
}

int Solution::countDigitOneOfNum(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == 1) {
            count++;
        }
        num /= 10;
    }
    return count;
}

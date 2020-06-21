//
// Created by chugang on 2020/6/21.
//
/**
 * 写一个函数，求两个整数之和，要求在函数体内不得使用 “+”、“-”、“*”、“/” 四则运算符号。
 * 思路：
 * 1.各位相加，不统计进位，使用异或运算。
 * 2.使用与运算，然后左移1位。两个数相加，只能够使位数增加一位。
 * 3.重复前面两步，终止条件，第二个数为0，结果是第一个数。
 */
#include "Solution.h"

int Solution::add(int num1, int num2) {
    do {
        int sum = num1 ^num2;
//        int carry = (num1 & num2) << 1;
// 上面这句，在leetcode出错：
//        Line 6: Char 34: runtime error: left shift of negative value -2147483648 (solution.cpp)
//        SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior prog_joined.cpp:16:34
        int carry = ((num1 & num2) & 0xffffffff) << 1;    // 来源于网上，我不明白为何出错，也不明白这句为何无错
        num1 = sum;
        num2 = carry;
    } while (num2 != 0);

    return num1;
}

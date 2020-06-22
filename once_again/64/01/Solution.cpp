//
// Created by chugang on 2020/6/22.
//
/******************************************************************************
 * 求 1+2+...+n ，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件
 * 判断语句（A?B:C）。
 * 思路：改造递归
 * 1.使用递归：int res = (n == 0) ? 0 : n + sumNums(n-1);
 * 2.改造为 n && (n += sumNums(n-1));
 *****************************************************************************/
#include "Solution.h"

int Solution::sumNums(int n) {
    n && (n += sumNums(n - 1));
    return n;
}

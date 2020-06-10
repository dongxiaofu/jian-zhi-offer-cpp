//
// Created by chugang on 2020/6/10.
//
/*********************************************************************
 * 约瑟夫环，时间复杂度O(?)。
 * 题目描述：n个人围成一个圆圈，依次报数，报到m的人出列，从第m+1个人重头开始报数，
 * 报到m的人出列。反复进行，当只剩下一个人时停止。如果不存在这样的人，返回-1。
 * 思路：数学推导公式
 * 讲解见：约瑟夫环——公式法（递推公式）https://blog.csdn.net/u011500062/article/details/72855826
 * todo 关键点：f(n,m)是n个人排成圈，报数m的出圈的函数，值为最后剩余的那个。
 * f(n,m) = f(n-1,m) + m。
 * 假设f(n-1,m)获得最后的那个人的位置P（即编号），那么f(n,m)中，P的位置是p+m。
 * 实际上，使用的也是递归。
 **********************************************************************/
#include "Solution.h"

int Solution::GetLastRemaining(int n, int m) {
    if (n * m <= 0) {
        return -1;
    }
    int number = josephus(n, m);

    return (number + 1);
}

int Solution::josephus(int n, int m) {
    if (n == 0) {
        return -10;     // todo 这个值不重要，重要的是，停止递归
    }
    // todo 对n取模运算，我理解不了。资料说，是防止数组越界。
    return (josephus(n - 1, m) + m) % n;    // 这是个固定值，0或非0
}

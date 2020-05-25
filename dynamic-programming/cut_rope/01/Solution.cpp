//
// Created by chugang on 2020/5/25.
//

#include "Solution.h"
/**************************************************************
 * 求最大值或最小值，一般使用动态规划。
 * 可是，这个题目，对动态规划的使用，和我在《算法图解》中看到的动态规划，使用
 * 方法不一样。那本书中，用到了格子，最大差别是，用到了一个公式。
 * 本题，把大问题分解为小问题。
 * 设f(n)是长度为n的绳子切割后各段的最大乘积。
 * f(n)的值，是max(f(i)*f(n-i))，即，f(1)*f(n-1)、f(2)*f(n-2)等的
 * 最大值。
 * todo 仍然没能透彻理解。
 **************************************************************/
int Solution::cutRope(int number) {
    if (number < 2) {
        return 0;
    }
    if (number == 2) {
        return 1;
    }
    if (number == 3) {
        return 2;
    }

    // 实际上，当number<=3时，使用上面的代码获取乘积。
    // 当number>=4时，使用下面的代码获取乘积。
    // products[0]到products[3]，作用是为下面的循环代码
    // 计算乘积提供基础。
    int *products = new int[number + 1];
    products[0] = 0;    // 长度为1时的最大乘积
    products[1] = 1;    // 长度为2时的最大乘积
    products[2] = 2;    // 长度为3时的最大乘积
    products[3] = 3;    // 长度为4时的最大乘积  // todo 为啥不是2*2=4呢？??

    int max = 0;
    for (int i = 4; i <= number; i++) {
        for (int j = 1; j <= i / 2; j++) {
            int product = products[j] * products[i - j];
            if (product > max) {
                max = product;
            }
            products[i] = max;
        }
    }
    max = products[number];
    delete[]products;
    return max;
}

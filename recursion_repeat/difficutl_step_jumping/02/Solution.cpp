//
// Created by chugang on 2020/5/27.
//

#include "Solution.h"
/*
 * 尾递归写法，根据递归的结果，归纳得出的方法。
 */
int Solution::jumpFloorII(int target) {
    if (target == 0) {
        return 0;
    }
    if (target <= 2) {
        return target;
    }
    int f1 = 2;
    int f3 = f1 * 2;
    int start = 3;
    while (start <= target) {
        f3 = f1 * 2;
        f1 = f3;
        start++;
    }
    return f3;
}
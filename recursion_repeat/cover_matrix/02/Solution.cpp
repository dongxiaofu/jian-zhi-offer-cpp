//
// Created by chugang on 2020/5/27.
//

#include "Solution.h"
/*
 * 时间复杂度O(n)，据说，比递归耗时少。
 */
int Solution::RectCover(int target) {
    if (target <= 3) {
        return target;
    }
    int f1 = 1;
    int f2 = 2;
    int f3 = f1 + f2;
    int n = 4;
    while (n <= target) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        n++;
    }
    return f3;
}

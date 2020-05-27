//
// Created by chugang on 2020/5/27.
//

#include "Solution.h"

/***************************************************
 * 变态跳台阶。
 * 看别人的代码，我才做出来。几乎，没有自己的分析能力吗？
 * 试着写一下，就能看出这种思路了。
 * f(n)=f(n-1)+f(n-2)+f(n-3)+...f(1)
 * f(n-1)=f(n-2)+f(n-3)+f(n-4)+...f(1)
 * 推导出，f(n)=2f(n-1)
 ***************************************************/
int Solution::jumpFloorII(int target) {
    if (target == 0) {
        return 0;
    }
    if (target <= 2) {
        return target;
    }
    return 2 * jumpFloorII(target - 1);
}

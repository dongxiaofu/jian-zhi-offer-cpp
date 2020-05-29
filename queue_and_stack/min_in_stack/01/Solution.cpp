//
// Created by chugang on 2020/5/29.
//
/************************************************************************
 * 包含min函数的栈，时间复杂度O(n)
 * 思路：
 * 1.minV保存最小值。
 * 2.push时，v比minV小，更新minV=v。
 * 3.pop时，top = minV，在剩下的元素中找到最小值，并且赋值给minV。
 ************************************************************************/
#include "Solution.h"

void Solution::push(int v) {
    stack1.push_back(v);
    if (v < minV) {
        minV = v;
    }
}

void Solution::pop() {
    int topV = top();
    stack1.pop_back();
    if (topV != minV) {
        return;
    }
    minV = 65536;   // todo 找个合适的值。弄错了几次。
    for (int i = 0; i < stack1.size(); i++) {
        if (minV > stack1[i]) {
            minV = stack1[i];
        }
    }
}

int Solution::top() {
    return stack1[stack1.size() - 1];
}

int Solution::min() {
    return minV;
}

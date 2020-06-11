//
// Created by chugang on 2020/6/11.
//
/********************************************************************************
 * 定义栈的数据结构，请在该类型中实现一个能够得到栈的最小元素的 min 函数在该栈中，
 * 调用 min、push 及 pop 的时间复杂度都是 O(1)。
 ********************************************************************************/
#include "Solution.h"

void Solution::push(int v) {
    if (stack2.empty()) {
        stack2.push(v);
    } else {
        if (v < stack2.top()) {
            stack2.push(v);
        } else {
            stack2.push(stack2.top());
        }
    }

    stack1.push(v);
}

void Solution::pop() {
    if (stack1.empty()) {
        return;
    }
    int top = stack1.top();
    if (stack2.top() == top) {
        stack1.pop();
        stack2.pop();
    } else {
        stack1.pop();
    }
    return;
}

int Solution::top() {
    if (stack1.empty()) {
        return INT_MIN;
    }
    int top = stack1.top();
    return top;
}

int Solution::min() {
    if (stack2.empty()) {
        return INT_MIN;
    }
    return stack2.top();
}
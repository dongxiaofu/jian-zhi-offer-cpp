//
// Created by chugang on 2020/5/28.
//
/******************************************
 * 1.push，只入栈stack1。
 * 2.pop，先将stack1中的数据复制到stack2中，然
 * 后stack2出栈得到目标数据，再讲数据从stack2中
 * 复制到stack1中。pop后，stack2为空。
 * 3.时间复杂度O(n)，操作都集中在pop中。
 * 4.c++的stack，top返回栈顶元素，pop只出栈，
 * 没有返回值。
 ******************************************/
#include "Solution.h"

void Solution::push(int node) {
    stack1.push(node);
}

int Solution::pop() {
    while (!stack1.empty()) {
        stack2.push(stack1.top());
        stack1.pop();
    }

    int top = stack2.top();
    stack2.pop();   // todo 这句，不能少
    while (!stack2.empty()) {
        stack1.push(stack2.top());
        stack2.pop();
    }

    return top;
}
//
// Created by chugang on 2020/6/18.
//
/**
 * 已经通过了leetcode测试。
 * 不能透彻理解。
 */
#include "Solution.h"

bool Solution::validateStackSequences(vector<int> &pushed, vector<int> &popped) {
    stack<int> stack1;
    int len1 = pushed.size();
    int j = 0;
    for (int i = 0; i < len1; i++) {
        stack1.push(pushed[i]);
        while (!stack1.empty() && stack1.top() == popped[j]) {
            stack1.pop();
            j++;
        }
    }
    return stack1.empty();
}

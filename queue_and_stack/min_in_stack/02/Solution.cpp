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
    stack2.pop();
    stack1.pop();
    // todo 我认为应该下面的代码才是正确的，可leetcode认为上面的代码才正确。我不理解。存疑，以后再看。
    // todo 总是容易在不需要产生疑问的地方产生疑问，有了疑问，我又不能迅速地解答自己的疑问。
    // todo 虽然我不知道为啥下面的代码不正确，但很明显，上面的代码一定正确啊。
    // todo stack1的辅助栈stack2，stack2存储当前最小的元素。当stack1中有3个元素时，stack2也有3个元素，对应的最小
    // todo 元素是stack2的栈顶元素。这是由push时决定的，push时，只在栈顶放最小的元素。
//
//    int top = stack1.top();
//    if (stack2.top() == top) {
//        stack1.pop();
//        stack2.pop();
//    } else {
//        stack1.pop();
//    }
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
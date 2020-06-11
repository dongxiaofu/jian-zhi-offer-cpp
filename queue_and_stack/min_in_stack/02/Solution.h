//
// Created by chugang on 2020/6/11.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    void push(int v);

    void pop();

    int top();

    int min();

private:
    stack<int> stack1;
    stack<int> stack2;
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

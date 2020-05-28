//
// Created by chugang on 2020/5/28.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <stack>

using namespace std;

class Solution {
public:
    void push(int node);

    int pop();

private:
    stack<int> stack1;
    stack<int> stack2;
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

//
// Created by chugang on 2020/5/29.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>

using namespace std;


class Solution {
private:
    int minV = 65536;
    vector<int> stack1;
public:
    void push(int v);

    void pop();

    int top();

    int min();
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

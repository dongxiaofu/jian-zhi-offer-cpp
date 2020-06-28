//
// Created by chugang on 2020/6/28.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <queue>
#include <deque>

using namespace std;

class Solution {
public:
    int max_value();

    void push_back(int v);

    int pop_front();

private:
    queue<int> queue1;
    deque<int> dequeue1;
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

//
// Created by chugang on 2020/5/29.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <stack>
#include <cstring>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;

    ListNode(int x) :
            val(x), next() {}
};

class Solution {
public:
    ListNode *FindKthToTail(ListNode *pHead, unsigned int k);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

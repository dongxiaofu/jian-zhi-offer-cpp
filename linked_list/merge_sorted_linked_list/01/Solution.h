//
// Created by chugang on 2020/5/29.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <cstring>

struct ListNode {
    int val;
    struct ListNode *next;

    ListNode(int x) :
            val(x), next(NULL) {}

};

class Solution {
public:
    ListNode *Merge(ListNode *pHead1, ListNode *pHead2);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

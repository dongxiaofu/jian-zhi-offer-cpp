//
// Created by chugang on 2020/5/31.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <stack>
#include <vector>
#include <cstring>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;

    ListNode(int x) :
            val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

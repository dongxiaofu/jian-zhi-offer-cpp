//
// Created by chugang on 2020/5/30.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>
#include <cstring>

struct ListNode {
    int val;
    struct ListNode *next;

    ListNode(int x) :
            val(x), next(NULL) {}
};

using namespace std;

class Solution {
public:
    ListNode *FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2);

private:
    int GetListLength(ListNode *pHead);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

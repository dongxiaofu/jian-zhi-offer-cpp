//
// Created by chugang on 2020/5/29.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <cstring>

struct RandomListNode {
    int label;
    struct RandomListNode *next;
    struct RandomListNode *random;

    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {}
};

class Solution {
public:
    RandomListNode *Clone(RandomListNode *pHead);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

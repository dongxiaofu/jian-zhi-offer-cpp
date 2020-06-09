//
// Created by chugang on 2020/6/9.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <string>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;

    ListNode(int x) :
            val(x), next(NULL) {}
};


class Solution {
public:
    int GetLastRemaining(int n, int m);

private:
    ListNode *head;

    void CreateCircle(int n);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

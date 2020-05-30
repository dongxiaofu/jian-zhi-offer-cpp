//
// Created by chugang on 2020/5/30.
//

#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    ListNode *node11 = new ListNode(1);
    ListNode *node12 = new ListNode(2);
    ListNode *node13 = new ListNode(3);
    node11->next = node12;
    node12->next = node13;

    ListNode *node21 = new ListNode(1);
    ListNode *node22 = new ListNode(2);
    ListNode *node23 = new ListNode(3);
    ListNode *node24 = new ListNode(4);
    ListNode *node25 = new ListNode(5);
    node21->next = node22;
    node22->next = node23;
    node23->next = node24;
    node24->next = node25;

    ListNode *node17 = new ListNode(7);
    ListNode *node18 = new ListNode(8);
    ListNode *node19 = new ListNode(9);
    node17->next = node18;
    node18->next = node19;

    node13->next = node17;
    node25->next = node17;

    ListNode *node = solution.FindFirstCommonNode(node11, node21);
    cout << node->val << endl;

    return 0;
}
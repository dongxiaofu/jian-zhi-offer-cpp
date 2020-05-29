//
// Created by chugang on 2020/5/29.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    RandomListNode *node11 = new RandomListNode(1);
    RandomListNode *node12 = new RandomListNode(2);
    RandomListNode *node13 = new RandomListNode(3);
    node11->next = node12;
    node11->random = node13;
    node12->next = node13;
    node12->random = node11;
    node13->random = NULL;
    RandomListNode *node111 = solution.clone(node11);

    return 0;
}

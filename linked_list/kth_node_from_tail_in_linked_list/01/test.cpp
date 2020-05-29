//
// Created by chugang on 2020/5/29.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    ListNode *node1 = new ListNode(1);
    ListNode *node2 = new ListNode(2);
    ListNode *node3 = new ListNode(3);
    node1->next = node2;
    node2->next = node3;

    ListNode *kthNode1 = solution.FindKthToTail(NULL, 3);
    cout << kthNode1 << endl;

    ListNode *kthNode2 = solution.FindKthToTail(node1, 3);
    cout << kthNode2->val << endl;

    ListNode *kthNode3 = solution.FindKthToTail(node1, 4);
    if (kthNode3 != NULL) {
        cout << kthNode3->val << endl;
    } else {
        cout << "kthNode3 不存在" << endl;
    }

    return 0;
}

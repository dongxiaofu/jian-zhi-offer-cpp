//
// Created by chugang on 2020/5/28.
//
#include <iostream>
#include "Solution.h"

void print_linked_list(ListNode *pHead);

int main() {
    Solution solution;
    ListNode *new_node1 = solution.ReverseList(NULL);
    print_linked_list(new_node1);

    ListNode *node1 = new ListNode(1);
    ListNode *node2 = new ListNode(2);
    ListNode *node3 = new ListNode(3);
    node1->next = node2;
    node2->next = node3;
    print_linked_list(node1);
    ListNode *new_node2 = solution.ReverseList(node1);
    print_linked_list(new_node2);

    return 0;
}

void print_linked_list(ListNode *pHead) {
    ListNode *cur = pHead;
    while (cur != NULL) {
        cout << cur->val << ",";
        cur = cur->next;
    }
    cout << endl;
}

//
// Created by chugang on 2020/5/29.
//
#include <iostream>
#include "Solution.h"

using namespace std;

void print_linked_list(ListNode *pHead);

int main() {
    Solution solution;

    ListNode *node11 = new ListNode(1);
    ListNode *node12 = new ListNode(2);
    ListNode *node13 = new ListNode(3);
    ListNode *node14 = new ListNode(4);
    node11->next = node12;
    node12->next = node13;
    node13->next = node14;
    print_linked_list(node11);

    ListNode *node21 = new ListNode(3);
    ListNode *node22 = new ListNode(5);
    ListNode *node23 = new ListNode(7);
    ListNode *node24 = new ListNode(9);
    node21->next = node22;
    node22->next = node23;
    node23->next = node24;
    print_linked_list(node21);

    ListNode *merged_node = solution.Merge(node11, node21);
    print_linked_list(merged_node);


    return 0;
}

void print_linked_list(ListNode *pHead) {
    ListNode *current = pHead;
    while (current != NULL) {
        cout << current->val << ",";
        current = current->next;
    }
    cout << endl;
    cout << "============================" << endl;
}

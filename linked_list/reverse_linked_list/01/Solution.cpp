//
// Created by chugang on 2020/5/28.
//

#include "Solution.h"

ListNode *Solution::ReverseList(ListNode *pHead) {
    if (pHead == NULL) {
        return NULL;
    }
    stack<int> stack1;
    ListNode *current = pHead;
    while (current != NULL) {
        stack1.push(current->val);
        current = current->next;
    }

    ListNode *head = new ListNode(-1);
    ListNode *cur = head;
    while (!stack1.empty()) {
        ListNode *node = new ListNode(stack1.top());
        cur->next = node;
        cur = node;
        stack1.pop();
    }

    return head->next;
}
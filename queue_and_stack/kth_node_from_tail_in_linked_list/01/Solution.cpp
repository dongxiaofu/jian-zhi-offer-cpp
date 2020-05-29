//
// Created by chugang on 2020/5/29.
//
/***************************************************
 * 链表中倒数第k个结点，时间复杂度O(n)。
 * 思路：
 * 1.若链表为空，返回空。
 * 2.若k大于链表长度，返回空。链表有3个结点，求倒数第4个结点。
 * 3.将链表放入栈中。
 * 4.出栈k次。
 ***************************************************/
#include "Solution.h"

ListNode *Solution::FindKthToTail(ListNode *pHead, unsigned int k) {
    if (pHead == NULL) {
        return NULL;
    }
    int nodeNum = 0;
    stack<ListNode *> stack1;
    ListNode *current = pHead;
    while (current != NULL) {
        stack1.push(current);
        nodeNum++;
        current = current->next;
    }
    if (nodeNum < k) {
        return NULL;
    }
    ListNode *kThNode;
    for (int i = 0; i < k; i++) {
        kThNode = stack1.top();
        stack1.pop();
    }
    return kThNode;
}
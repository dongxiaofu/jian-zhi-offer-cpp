//
// Created by chugang on 2020/5/29.
//
/*************************************************
 * 反转链表，时间复杂度O(n)。
 * 思路：
 * 1.若头结点为NULL，返回NULL。
 * 2.遍历旧链表L1，将结点逐个放入栈S，直接放结点，而不是放
 * 结点的val。
 * 2.S出栈直至栈空，将每个出栈结点方法新链表N中。
 *************************************************/
#include "Solution.h"

ListNode *Solution::ReverseList(ListNode *pHead) {
    if (pHead == NULL) {
        return NULL;
    }
    stack<ListNode *> stack1;
    ListNode *current = pHead;
    while (current != NULL) {
        stack1.push(current);
        current = current->next;
    }

    ListNode *newPHead;
    ListNode *currentNode = newPHead;
    while (!stack1.empty()) {
        currentNode->next = stack1.top();
        stack1.pop();
        currentNode = currentNode->next;
    }
    // todo 这句很重要，若没有这句，会出现循环链表
    currentNode->next = NULL;
    return newPHead->next;
}
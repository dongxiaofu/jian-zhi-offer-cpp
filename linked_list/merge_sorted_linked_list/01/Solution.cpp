//
// Created by chugang on 2020/5/29.
//
/******************************************************
 * 合并两个排序的链表，时间复杂度O(n)。
 * 思路：
 * 1.创建一个新链表的头结点pHead3。
 * 2.同时遍历两个旧链表，循环进行的条件是两个旧链表都没遍历完。
 * 3.遍历过程中，将小的结点连接到新链表中。
 * 4.遍历结束后，分别遍历两个旧链表，将结点连接到新链表中。
 ******************************************************/
#include "Solution.h"

ListNode *Solution::Merge(ListNode *pHead1, ListNode *pHead2) {
    ListNode *pHead3 = new ListNode(-1);
    ListNode *current1 = pHead1;
    ListNode *current2 = pHead2;
    ListNode *current3 = pHead3;
    while (current1 != NULL && current2 != NULL) {
        if (current1->val < current2->val) {
            current3->next = current1;
            current1 = current1->next;
        } else {
            current3->next = current2;
            current2 = current2->next;
        }
        current3 = current3->next;
    }
    while (current1 != NULL) {
        current3->next = current1;
        current3 = current3->next;
        current1 = current1->next;
    }
    while (current2 != NULL) {
        current3->next = current2;
        current3 = current3->next;
        current2 = current2->next;
    }
    return pHead3->next;
}

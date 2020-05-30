//
// Created by chugang on 2020/5/30.
//
/*********************************************************
 * 两个链表的第一个公共结点，时间复杂度O(n)。
 * 思路：
 * 1.让长链表将长的那部分结点走完，当两个链表长度相等时，同时遍历两个
 * 链表。遇到第一个相同的结点，就是目标结点。
 * 注意：比较两个结点是否相同，用=就可以了。
 *********************************************************/
#include "Solution.h"

ListNode *Solution::FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2) {
    int length1 = GetListLength(pHead1);
    int length2 = GetListLength(pHead2);
    if (length1 == 0 || length2 == 0) {
        return 0;
    }
    ListNode *shotCurrent;
    ListNode *longCurrent;
    int diff;
    int shortLength;
    if (length1 > length2) {
        diff = length1 - length2;
        shotCurrent = pHead2;
        longCurrent = pHead1;
        shortLength = length2;
    } else {
        diff = length2 - length1;
        shotCurrent = pHead1;
        longCurrent = pHead2;
        shortLength = length1;
    }

    for (int i = 0; i < diff; i++) {
        longCurrent = longCurrent->next;
    }

    ListNode *commonNode;
    int couter = 0;
    while (shotCurrent != NULL && longCurrent != NULL && shotCurrent != longCurrent) {
        shotCurrent = shotCurrent->next;
        longCurrent = longCurrent->next;
        couter++;
    }
    // todo 当两者相等时，表示，上面的遍历不是碰到了公共结点，而是，遍历结束了。
    // todo 这个判断条件，不太合适，假如第一个公共结点恰好是最后结点呢？
    if (couter <= shortLength) {
        commonNode = shotCurrent;
    }
    return commonNode;
}

int Solution::GetListLength(ListNode *pHead) {
    int length = 0;
    ListNode *current = pHead;
    while (current != NULL) {
        length++;
        current = current->next;
    }

    return length;
}
//
// Created by chugang on 2020/5/28.
//
/************************************************************
 * 时间复杂度O(n)
 * 本题，只删除相邻的重复结点。
 * 思路：
 * 1.删除重复结点。将结点逐个放入栈。放入时，比较将放入的结点A与栈顶结点B
 * 的值是否相等，若相等，B出栈，A不入栈；若不相等，A入栈。
 * 2.重建链表。
 * 难点：c++的指针；链表的表示；struct的初始化。
 ************************************************************/
#include "Solution.h"

ListNode *Solution::deleteDuplication(ListNode *pHead) {
    vector<int> stack;
    // 删除重复结点
    ListNode *current = pHead;
    int preVal = 65536;     // todo 如何恰当地表示一个链表中结点不可能具有的值呢？
    while (current != NULL) {
        int size = stack.size();
        int val = current->val;
        if (preVal == val) {
            current = current->next;
            continue;
        }
        // preval = val // todo 很关键，不能放在这里。若放在这里，不能删除重复结点。
        if (size == 0) {
            stack.push_back(val);
        } else {
            if (val == stack[size - 1]) {
                preVal = val;   // todo 很关键，只能放在这里
                stack.pop_back();
            } else {
                stack.push_back(val);
            }
        }
        current = current->next;
    }
    // 重建链表
    ListNode *head = new ListNode(-1);
    ListNode *pre = head;
    int size = stack.size();
    for (int i = 0; i < size; i++) {
        ListNode *node = new ListNode(stack[i]);
        pre->next = node;
        pre = node;
    }
    return head->next;
//    return pre->next;
}
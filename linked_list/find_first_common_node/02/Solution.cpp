//
// Created by chugang on 2020/5/31.
//
/***************************************************************
 * 两个链表的第一个公共结点，时间复杂度O(N)。出栈法。
 * 思路：
 * 1.将链表L1放入栈S1，将链表L2放入栈S2。
 * 2.同时对S1和S2进行出栈操作，当出栈元素不相等时，停止出栈。
 * 3.出栈元素不相等时，前一个出栈元素就是第一个公共结点item。
 * 4.按出栈顺序看，item是最后一个公共结点；按链表顺序看，item是第一个公共
 * 结点。
 ***************************************************************/

#include "Solution.h"

ListNode *Solution::FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2) {
    stack<ListNode *> stack1;
    stack<ListNode *> stack2;
    ListNode *current1 = pHead1;
    ListNode *current2 = pHead2;
    while (current1 != NULL) {
        stack1.push(current1);
        current1 = current1->next;
    }

    while (current2 != NULL) {
        stack2.push(current2);
        current2 = current2->next;
    }

    ListNode *preNode;
    while (!stack1.empty() && !stack2.empty()) {
        ListNode *topNode1 = stack1.top();
        stack1.pop();

        ListNode *topNode2 = stack2.top();
        stack2.pop();

        if (topNode1 != topNode2) {
            break;
        }

        preNode = topNode1;
    }

    return preNode;
}

//
// Created by chugang on 2020/6/9.
//
/*********************************************************************
 * 约瑟夫环，时间复杂度O(?)。
 * 题目描述：n个人围成一个圆圈，依次报数，报到m的人出列，从第m+1个人重头开始报数，
 * 报到m的人出列。反复进行，当只剩下一个人时停止。如果不存在这样的人，返回-1。
 * 思路：最简单的方法，模拟法。
 * 1.创建一个有n个结点的环形链表，最后一个结点指向头结点。
 * 2.报数并删除
 * 2.1.如果没有到第m个结点，继续遍历链表。
 * 2.2.如果到了第m个结点，又分两种情况：
 * 2.2.1.如果要删除的是序号为1的结点，前一个结点pre等于被删除结点的下一个结点node。
 * 当前结点就是pre。当前结点就是重新开始报数的结点。
 * 2.2.2.如果要删除的不是序号为1的结点，前一个结点pre的下一个结点指向被删除结点的下
 * 一个结点。当前结点是pre。当前结点就是重新开始报数的结点。
 * 3.只剩下一个结点时，停止报数。这个结点就是目标结点。
 **********************************************************************/
#include "Solution.h"

int Solution::GetLastRemaining(int n, int m) {
    if (n * m <= 0) {
        return -1;
    }
    CreateCircle(n);
    ListNode *pre = NULL;
    ListNode *current = head;
    int index = 1;
    int start = 1;

    int counter = 0;

    while (current != NULL && current->next != NULL) {
        if (index == m) {
//            printf("%d\n", current->val);
//            if (++counter >= 6) {
//                break;
//            }
            if (start == m) {
                pre = current->next;
                current->next = NULL;
                current = pre;
            } else {
                pre->next = current->next;
                // todo 花费时间最多的地方。作用是，当环形链表只有一个结点时，避免死循环。
                // todo 再次强调，仅在只有一个结点时发挥作用。todo 其他时候，为何不发挥作用？
                // todo 发挥作用是指，当current->next=NULL时，pre->next的值也是NULL。
                current->next = NULL;
                current = pre->next;
            }
            index = start;
        } else {
            pre = current;
            current = current->next;
            index++;
        }
    }
    // todo 为何不是current？不能看一眼就明白。与上面的todo有关系。
    if (pre == NULL) {
        return -1;
    }

    return pre->val;
}

void Solution::CreateCircle(int n) {
    head = new ListNode(1);
    ListNode *current = head;
    int index = 1;

    while (--n > 0) {
        ListNode *node = new ListNode(++index);
        current->next = node;
        current = current->next;
    }

    current->next = head;
}

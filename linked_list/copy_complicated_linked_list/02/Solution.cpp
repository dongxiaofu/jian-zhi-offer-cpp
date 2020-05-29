//
// Created by chugang on 2020/5/29.
//
/*******************************************
 * 复制复杂链表，时间复杂度O(n)。
 * 思路：
 * 1.将每个结点复制一个。
 * 2.N1是N2的克隆结点，N2的random是R2，N1的
 * random是R2->next。因为，R2->next是R2的克隆
 * 结点。
 * 3.分离出偶数位结点，这些结点组成克隆的结果。
 * 注意：todo 这是看别人的代码后，自己写出来的。
 * 花了很多时间。我仍然不能很熟练地写出这些代码。
 * 理解这思路，也不是很彻底。
 *******************************************/
#include "Solution.h"

RandomListNode *Solution::Clone(RandomListNode *pHead) {
    if (pHead == NULL) {
        return NULL;
    }

    RandomListNode *current = pHead;
    while (current != NULL) {
        RandomListNode *node = new RandomListNode(current->label);
        node->next = current->next;
        current->next = node;
        current = node->next;
    }

    current = pHead;
    while (current != NULL) {
        if (current->random != NULL) {
            current->next->random = current->random->next;
        }
        current = current->next->next;
    }

    current = pHead;
    RandomListNode *res = pHead->next;
    while (current->next != NULL) {
        RandomListNode *tmp = current->next;
        current->next = tmp->next;
        current = tmp;
    }

    return res;
}
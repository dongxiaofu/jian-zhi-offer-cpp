//
// Created by chugang on 2020/5/28.
//
/*********************************************************
 * 时间复杂度O(n)。todo 是吗？
 * 思路：
 * 1.设置两个指针，快指针fast一次走两步，慢指针slow一次走一步。找出
 * slow和fast相遇的点A（若存在环）。当两个指针相遇时，fast走过的距离
 * 是slow走过的距离的2倍。
 * 2.头结点到环入口结点的距离等于A到环入口结点的距离。
 * todo 我不理解第2点。这个建立在，相遇时fast只走了一圈。
 *********************************************************/
#include "Solution.h"

ListNode *Solution::EntryNodeOfLoop(ListNode *pHead) {
    ListNode *slow = pHead;
    ListNode *fast = pHead;
    // 检查是否存在环；找到相遇点
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;    // 一次走两步
        slow = slow->next;
        if (slow == fast) {
            break;
        }
    }
    // 不需要检查 slow 和 slow->next，因为，fast是NULL时，循环已经终止
    if (fast == NULL || fast->next == NULL) {
        return NULL;
    }
    // 找到环入口结点
    fast = pHead;
    while (fast != slow) {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
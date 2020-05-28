//
// Created by chugang on 2020/5/28.
//

#include "Solution.h"

/************************************************************
 * 用C++做链表型题目第一题。
 * 时间复杂度O(n)
 * 1.如何表示链表，不会。---》牛客网提供了模板。
 * 2.指针的使用，错误。---》通过ide纠错，但仍不能完全理解。
 * 没有这个工具，我将会摸索更长时间，自己判断对错更麻烦。
 ************************************************************/
vector<int> Solution::printListFromTailToHead(struct ListNode *head) {
    vector<int> tmp;
    // todo 等同 ListNode *current = head;
    // todo 为什么不是 ListNode *current = *head;因为head是内存地址，*current的值必须是地址
    struct ListNode *current = head;
    while (current != NULL) {
        tmp.push_back(current->val);
        current = current->next;
    }
    int size = tmp.size();
    vector<int> res;
    for (int i = size - 1; i >= 0; i--) {
        res.push_back(tmp[i]);
    }
    return res;
}
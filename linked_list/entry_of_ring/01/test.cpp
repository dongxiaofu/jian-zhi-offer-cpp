//
// Created by chugang on 2020/5/28.
//

#include <iostream>
#include "Solution.h"

using namespace std;

void print_list(ListNode *pHead);

int main() {
    Solution solution;

    // todo 构造链表时，不需要先创建结点A的next结点B之后才能创建A。
//    {1,2},{3,4,5}
    ListNode *node1 = new ListNode(1);
    ListNode *node2 = new ListNode(2);
    ListNode *node3 = new ListNode(3);
    ListNode *node4 = new ListNode(4);
    ListNode *node5 = new ListNode(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node3;

    print_list(node1);

    ListNode *entry = solution.EntryNodeOfLoop(node1);
    cout << entry->val << endl;

    return 0;
}

void print_list(ListNode *pHead) {
    ListNode *current = pHead;
    int count = 0;
    int limit = 6;
    while (current != NULL) {
        if (count == limit) {
            break;
        }
        cout << current->val << ",";
        count++;
        current = current->next;
    }
    cout << endl;
}
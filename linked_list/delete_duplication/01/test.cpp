//
// Created by chugang on 2020/5/28.
//
#include <iostream>
#include "Solution.h"

using namespace std;

void print_linked_list(ListNode *pHead);

int main() {
    Solution solution;

//    1->2->3->3->4->4->5
    struct ListNode *node5 = new ListNode(5);
    ListNode *node42 = new ListNode(4);
    node42->next = node5;
    ListNode *node41 = new ListNode(4);
    node41->next = node42;
    ListNode *node32 = new ListNode(3);
    node32->next = node41;
    ListNode *node31 = new ListNode(3);
    node31->next = node32;
    ListNode *node2 = new ListNode(2);
    node2->next = node31;
    ListNode *node1 = new ListNode(1);
    node1->next = node2;
    ListNode *linkedNode = solution.deleteDuplication(node1);
    print_linked_list(linkedNode);

    // {1,1,1,1,1,1,1}
    ListNode *node13 = new ListNode(1);
    ListNode *node12 = new ListNode(1);
    node12->next = node13;
    ListNode *node11 = new ListNode(1);
    node11->next = node12;
    ListNode *linkedNode111 = solution.deleteDuplication(node11);
    print_linked_list(linkedNode111);

    return 0;
}

void print_linked_list(ListNode *pHead) {
    ListNode *current = pHead;
    // todo current 是地址还是地址里面的值？若是地址，地址会不等于NULL吗？内存地址，一定是一个存在的值吧？
    while (current != NULL) {
        cout << current->val << ",";
        current = current->next;
    }
    cout << endl;
}

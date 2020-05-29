//
// Created by chugang on 2020/5/29.
//
#include <iostream>
#include "Solution.h"

using namespace std;

void print_linked_list(RandomListNode *pHead);

int main() {
    Solution solution;

    RandomListNode *node11 = new RandomListNode(1);
    RandomListNode *node12 = new RandomListNode(2);
    RandomListNode *node13 = new RandomListNode(3);
    node11->next = node12;
    node11->random = node13;
    node12->next = node13;
    node12->random = node11;
    node13->random = NULL;
    print_linked_list(node11);
    RandomListNode *node111 = solution.Clone(node11);
    print_linked_list(node111);

    return 0;
}

void print_linked_list(RandomListNode *pHead) {
    RandomListNode *current = pHead;
    while (current != NULL) {
        cout << current->label << ",";
        current = current->next;
    }

    cout << endl;

    cout << endl << "======================" << endl;
}

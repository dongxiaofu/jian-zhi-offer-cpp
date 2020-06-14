//
// Created by chugang on 2020/6/14.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

//    Node *node2 = new Node(2);
//    Node *node3 = new Node(3);
//    Node *node4 = new Node(4);
//    node3->left = node2;
//    node3->right = node4;
//
//    Node *node5 = new Node(5);
//
//    Node *node6 = new Node(6);
//    Node *node7 = new Node(7);
//    Node *node8 = new Node(8);
//    node7->left = node6;
//    node7->right = node8;
//
//    node5->left = node3;
//    node5->right = node7;
//
//    Node *target = solution.treeToDoublyList(node5);
//    cout << target->val << endl;

    Node *node2 = new Node(2);

    Node *target = solution.treeToDoublyList(node2);
    cout << target->val << endl;

    return 0;
}

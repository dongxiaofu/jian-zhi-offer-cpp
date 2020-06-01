//
// Created by chugang on 2020/6/1.
//
#include <iostream>
#include "Solution.h"

void print_node(TreeLinkNode *pNode);

int main() {
    Solution solution;
    // 2,1,3,4,5,6
    TreeLinkNode *node1 = new TreeLinkNode(1);
    TreeLinkNode *node2 = new TreeLinkNode(2);
    TreeLinkNode *node3 = new TreeLinkNode(3);
    node3->left = node1;
    node1->left = node2;
    node2->next = node1;
    node1->next = node3;
    TreeLinkNode *node4 = new TreeLinkNode(4);
    TreeLinkNode *node5 = new TreeLinkNode(5);
    TreeLinkNode *node6 = new TreeLinkNode(6);
    node3->right = node5;
    node5->next = node3;
    node5->left = node4;
    node4->next = node5;
    node5->right = node6;
    node6->next = node5;

//    TreeLinkNode *tNode1 = solution.GetNext(node6);
//    print_node(tNode1);
//
//    TreeLinkNode *tNode2 = solution.GetNext(node2);
//    print_node(tNode2);

    TreeLinkNode *tNode3 = solution.GetNext(node3);
    print_node(tNode3);

    return 0;
}

void print_node(TreeLinkNode *pNode) {
    if (pNode == NULL) {
        cout << "空结点" << endl;
    } else {
        cout << pNode->val << endl;
    }
}

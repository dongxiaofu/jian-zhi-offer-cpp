//
// Created by chugang on 2020/6/13.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    node3->left = node2;
    node3->right = node4;

    TreeNode *node5 = new TreeNode(5);

    TreeNode *node6 = new TreeNode(6);
    TreeNode *node7 = new TreeNode(7);
    TreeNode *node8 = new TreeNode(8);
    node7->left = node6;
    node7->right = node8;

    node5->left = node3;
    node5->right = node7;

    TreeNode *p = node6;
    TreeNode *q = node8;
    TreeNode *target = solution.lowestCommonAncestor(node5, p, q);
    cout << target->val << endl;

    return 0;
}

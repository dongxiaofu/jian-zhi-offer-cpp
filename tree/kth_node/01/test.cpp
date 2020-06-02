//
// Created by chugang on 2020/6/2.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

//    2,3,4,5,6,7,8
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node5 = new TreeNode(5);
    TreeNode *node6 = new TreeNode(6);
    TreeNode *node7 = new TreeNode(7);
    TreeNode *node8 = new TreeNode(8);

    node5->left = node3;    // root
    node3->left = node2;
    node3->right = node4;
    node5->right = node7;
    node7->left = node6;
    node7->right = node8;

    TreeNode *node = solution.KthNode(node5, 3);
    cout << node->val << endl;

    return 0;
}

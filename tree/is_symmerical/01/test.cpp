//
// Created by chugang on 2020/6/2.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

//    TreeNode *node2 = new TreeNode(2);
//    TreeNode *node3 = new TreeNode(3);
//    TreeNode *node4 = new TreeNode(4);
//    TreeNode *node5 = new TreeNode(5);
//    TreeNode *node6 = new TreeNode(6);
//    TreeNode *node7 = new TreeNode(7);
//    TreeNode *node8 = new TreeNode(8);
//
//    node5->left = node3;    // root
//    node3->left = node2;
//    node3->right = node4;
//    node5->right = node7;
//    node7->left = node6;
//    node7->right = node8;
//
//    TreeNode *result = solution.getImage(node5);
//    cout << 4 << endl;
//
//    bool isSymmerical = solution.isSymmerical(node5);
//    cout << isSymmerical << endl;

    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(2);
    TreeNode *node5 = new TreeNode(5);
    TreeNode *node6 = new TreeNode(2);
    TreeNode *node7 = new TreeNode(3);
    TreeNode *node8 = new TreeNode(2);

    node5->left = node3;    // root
    node3->left = node2;
    node3->right = node4;
    node5->right = node7;
    node7->left = node6;
    node7->right = node8;

    TreeNode *result = solution.getImage(node5);
    cout << 4 << endl;

    bool isSymmerical = solution.isSymmerical(node5);
    cout << isSymmerical << endl;


    {8,6,9,5,7,7,5}



    return 0;
}

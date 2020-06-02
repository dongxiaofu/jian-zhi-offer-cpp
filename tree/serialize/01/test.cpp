//
// Created by chugang on 2020/6/2.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    // 前序遍历，"根左右"，5,2,1,4,3
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node51 = new TreeNode(5);
    node51->left = node2;
    node2->right = node1;

    node51->right = node4;
    node4->left = node3;

    char *str = solution.Serialize(node51);
    cout << str << endl;

    TreeNode *root = solution.Deserialize(str);
    // 输出当然是5，难度，我还希望看到一个二叉树吗？看到这种输出，我竟然以为有错误！白白浪费很多时间。
    cout << root->val << endl;


    return 0;
}

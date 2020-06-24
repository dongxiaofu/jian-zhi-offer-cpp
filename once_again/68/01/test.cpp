//
// Created by chugang on 2020/6/23.
//
#include <iostream>
#include "Solution.h"

using namespace std;
// 只写了一种测试用例
int main() {
    Solution solution;
    // p、q在root的异侧
    TreeNode *node15 = new TreeNode(15);

    TreeNode *node8 = new TreeNode(8);
    TreeNode *node7 = new TreeNode(7);
    TreeNode *node9 = new TreeNode(9);
    node8->left = node7;
    node8->right = node9;

    TreeNode *node20 = new TreeNode(20);
    TreeNode *node18 = new TreeNode(18);
    TreeNode *node19 = new TreeNode(19);
    node20->left = node18;
    node20->right = node19;

    node15->left = node8;
    node15->right = node20;

    TreeNode *node = solution.lowestCommonAncestor(node15, node18, node9);
    cout << node->val << endl;      // 15

    // p == root

    // p、q在root的同侧


    return 0;
}

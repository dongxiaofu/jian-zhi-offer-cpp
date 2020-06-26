//
// Created by chugang on 2020/6/26.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node5 = new TreeNode(5);
    TreeNode *node6 = new TreeNode(6);
    TreeNode *node7 = new TreeNode(7);
//    TreeNode *node8 = new TreeNode(8);

    node2->left = node1;
    node2->right = node3;

    node6->left = node5;
    node6->right = node7;

    node4->left = node2;
    node4->right = node6;

    vector<vector<int>> paths = solution.pathSum(node4, 7);
    for (auto path:paths) {
        for (auto v:path) {
            cout << v << ",";
        }
        cout << endl;
    }

    return 0;
}

//
// Created by chugang on 2020/6/1.
//
#include <iostream>
#include "Solution.h"

void Print_Tree(vector<vector<int>> values);

int main() {
    Solution solution;
    // 前序遍历，"根左右"，5,2,1,4,3
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node5 = new TreeNode(5);
    node5->left = node2;
    node2->right = node1;

    node5->right = node4;
    node4->left = node3;

    vector<vector<int>> result = solution.Print(node5);
    Print_Tree(result);

    return 0;
}

void Print_Tree(vector<vector<int>> values) {
    for (int i = 0; i < values.size(); i++) {
        vector<int> vv = values[i];
        for (int j = 0; j < vv.size(); j++) {
            cout << vv[j] << ",";
        }
        cout << endl;
    }
}

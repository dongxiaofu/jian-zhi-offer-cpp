//
// Created by chugang on 2020/6/2.
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
    TreeNode *node51 = new TreeNode(5);
    node51->left = node2;
    node2->right = node1;

    node51->right = node4;
    node4->left = node3;

    vector<vector<int>> result = solution.Print(node51);
    Print_Tree(result);

    cout << endl << "=============================" << endl;

//    {8,6,10,5,7,9,11}
    TreeNode *node8 = new TreeNode(8);
    TreeNode *node6 = new TreeNode(6);
    TreeNode *node10 = new TreeNode(10);
    TreeNode *node5 = new TreeNode(5);
    TreeNode *node7 = new TreeNode(7);
    TreeNode *node9 = new TreeNode(9);
    TreeNode *node11 = new TreeNode(11);

    node8->left = node10;
    node8->right = node6;

    node10->left = node5;
    node10->right = node7;

    node6->left = node9;
    node6->right = node11;

    vector<vector<int>> result2 = solution.Print(node8);

    Print_Tree(result2);

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

//
// Created by chugang on 2020/6/13.
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

    node1->left = node2;
    node1->right = node3;
    node3->left = node4;
    node3->right = node5;

    string str = solution.serialize(node1);
    cout << str << endl;

    string data = "1,2,3,null,null,4,5,null,null,null,null";
    TreeNode *root = solution.deserialize(data);

    string data2 = "-1,0,1,null,null,null,null";
    TreeNode *root2 = solution.deserialize(data2);
    string data22 = solution.serialize(root2);
    cout << data22 << endl;

    string data3 = "1,9,2,null,null,8,10,null,null,null,null";
    TreeNode *root3 = solution.deserialize(data3);
    string data33 = solution.serialize(root3);
    cout << data33 << endl;

    return 0;
}

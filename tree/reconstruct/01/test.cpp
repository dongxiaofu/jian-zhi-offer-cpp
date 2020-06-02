//
// Created by chugang on 2020/6/2.
//
#include <iostream>
#include "Solution.h"
#include <queue>

void print_tree(TreeNode *pRoot);

int main() {
    Solution solution;

//    int preTmp[4] = {1, 2, 3, 4};
//    vector<int> pre(preTmp, preTmp + 4);
//    int inTmp[4] = {2, 1, 4, 3};
//    vector<int> in(inTmp, inTmp + 4);
//    TreeNode *pRoot = solution.reConstructBinaryTree(pre, in);
//    print_tree(pRoot);

//    [1,2,4,3,5,6],[4,2,1,5,3,6]
    int preTmp2[6] = {1, 2, 4, 3, 5, 6};
    vector<int> pre2(preTmp2, preTmp2 + 6);
    int inTmp2[6] = {4, 2, 1, 5, 3, 6};
    vector<int> in2(inTmp2, inTmp2 + 6);
    TreeNode *pRoot2 = solution.reConstructBinaryTree(pre2, in2);
    print_tree(pRoot2);

    return 0;
}

void print_tree(TreeNode *pRoot) {
    if (pRoot == NULL) {
        return;
    }

    queue<TreeNode *> Queue;
    Queue.push(pRoot);
    while (!Queue.empty()) {
        int size = Queue.size();
        for (int i = 0; i < size; i++) {
            TreeNode *node = Queue.front();
            cout << node->val << ",";
            if (node->left != NULL) {
                Queue.push(node->left);
            }
            if (node->right != NULL) {
                Queue.push(node->right);
            }
            Queue.pop();
        }
        cout << endl;
    }
}



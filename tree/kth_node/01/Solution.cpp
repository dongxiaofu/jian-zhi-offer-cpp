//
// Created by chugang on 2020/6/2.
//
/******************************************************
 * 二叉搜索树的第k个结点，时间复杂度O(N)？我不会分析使用递归的代码
 * 的时间复杂度。
 * 思路：
 * 1.将搜索二叉树T中序遍历。
 * 2.遍历过程中，将T的结点放入队列Q。
 * 3.对Q执行出队操作K次，第K次出队的元素，就是第K小的元素。
 *****************************************************/
#include "Solution.h"

TreeNode *Solution::KthNode(TreeNode *pRoot, int k) {
    queue<TreeNode *> nodeQueue;
    InOrderTraversal(pRoot, nodeQueue);
    int size = nodeQueue.size();
    if (k > size) {
        return NULL;
    }
    TreeNode *result;
    for (int i = 0; i < k; i++) {
        result = nodeQueue.front();
        nodeQueue.pop();
    }
    return result;
}

void Solution::InOrderTraversal(TreeNode *pRoot, queue<TreeNode *> &nodeQueue) {
    if (pRoot == NULL) {
        return;
    }

    if (pRoot->left != NULL) {
        InOrderTraversal(pRoot->left, nodeQueue);
    }

    nodeQueue.push(pRoot);

    if (pRoot->right != NULL) {
        InOrderTraversal(pRoot->right, nodeQueue);
    }
}

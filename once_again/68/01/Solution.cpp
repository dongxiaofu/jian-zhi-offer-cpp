//
// Created by chugang on 2020/6/23.
//
/************************************************************************
 * 给定一个二叉树, 找到该树中两个指定节点的最近公共祖先。
 * 思路：
 * 1.root是NULL，或p == root，或q == root，返回root。
 * 2.1.p、q分别在root的两侧，且p、q没有其他公共结点，返回root。===>p、q在root的两侧，
 * 它们一定没有其他公共结点。
 * 2.2.p、q在root的同侧，且p、q都不等于root，返回p、q在root的左子树的最近公共结点
 * （假设p、q在root的左侧）。====>使用了递归。
 ************************************************************************/
#include "Solution.h"

TreeNode *Solution::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    if (root == NULL || p == root || q == root) return root;
    TreeNode *left = lowestCommonAncestor(root->left, p, q);
    TreeNode *right = lowestCommonAncestor(root->right, p, q);
    if (left == NULL) return right;
    if (right == NULL) return left;
    return root;
}

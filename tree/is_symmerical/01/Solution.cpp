//
// Created by chugang on 2020/6/2.
//
/***************************************************
 * 对称的二叉树，时间复杂度O(?)。
 * 思路：
 * 1.使用递归获取原二叉T的镜像二叉树T1。
 * 2.递归比较T和T1的每一个结点是否相同。
 ***************************************************/
#include "Solution.h"

bool Solution::isSymmerical(TreeNode *pRoot) {
    if (pRoot == NULL) {
        return true;
    }
    TreeNode *mirrorRoot = getImage(pRoot);
    return isSymmericalCore(pRoot, mirrorRoot);
}

bool Solution::isSymmericalCore(TreeNode *pRoot, TreeNode *mirror) {
    if (pRoot == NULL && mirror == NULL) {
        return true;
    }
    if (pRoot == NULL || mirror == NULL) {
        return false;
    }
//    if (pRoot != mirror) {    // todo 即使结点值相同，左右子树的值都相同，两个结点也不同。根据运行结果。
//        return false;
//    }
    if (pRoot->val != mirror->val) {
        return false;
    }
    if (!isSymmericalCore(pRoot->left, mirror->left)) {
        return false;
    }
    if (!isSymmericalCore(pRoot->right, mirror->right)) {
        return false;
    }
    return true;
}

TreeNode *Solution::getImage(TreeNode *pRoot) {
    if (pRoot == NULL) {
        return NULL;
    }
    TreeNode *node = new TreeNode(pRoot->val);
    if (pRoot->left == NULL && pRoot->right == NULL) {
        return node;
    }
    node->left = getImage(pRoot->right);
    node->right = getImage(pRoot->left);
    return node;
}

//void Solution::getImage(TreeNode *pRoot, TreeNode *mirrorRoot) {
//    if (pRoot == NULL) {
//        return;
//    }
//    mirrorRoot->val = pRoot->val;
//    if (pRoot->left == NULL && pRoot->right == NULL) {
//        return;
//    }
//    mirrorRoot->left = pRoot->right;
//    mirrorRoot->right = pRoot->left;
//
//    getImage(pRoot->left, mirrorRoot->left);
//    getImage(pRoot->right, pRoot->right);
//}

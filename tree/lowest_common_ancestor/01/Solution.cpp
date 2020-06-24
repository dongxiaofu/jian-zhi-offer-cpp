//
// Created by chugang on 2020/6/13.
//
/***
 * 获取二叉搜索树中给定结点p、q的最近公共祖先结点。一个结点可以是自身的祖先结点。
 * 假设左子树的值全部比根结点的值小。
 * 思路：
 * 1.将root结点到p结点的路径上所经过的所有结点存储到数组arr1中，q对应的数组arr2。
 * 1.1.比较p的值pv和root的值的大小。大==》在root->right中查找p；小==>在root->left中查找p。
 * 1.2.查找过程中，将每个结点存到数组arr1中。
 * 2.同时遍历arr1和arr2，若遇到当前元素v1和v2相等，v1是目标结点。
 * 2.1.求两链表的第一个公共结点:
 * 2.1.1.从结点数少些的链表的末尾开始遍历，遇到第一个相等的结点，是目标结点。
 * 2.1.2.从最后的结点开始，分别将两个链表放入栈中。然后出栈，遇到第一个不相等的结点，前一个结点是目标结点。
 * 3.返回NULL。
 */
#include "Solution.h"

TreeNode *Solution::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    vector<TreeNode *> pPath = path(root, p);
    vector<TreeNode *> qPath = path(root, q);
    int pLen = pPath.size();
    int qLen = qPath.size();
    int min;
    if (pLen > qLen) {
        min = qLen;
    } else {
        min = pLen;
    }
    // 这里，复习时，又纠结了很久
    // 求两链表的第一个公共结点：
    for (int i = min - 1; i >= 0; i--) {
        if (pPath[i] == qPath[i]) {
            return pPath[i];
        }
    }
    return NULL;
}

vector<TreeNode *> Solution::path(TreeNode *root, TreeNode *p) {
    vector<TreeNode *> nodePath;
    pathCore(root, p, nodePath);
    return nodePath;
}

void Solution::pathCore(TreeNode *root, TreeNode *p, vector<TreeNode *> &path) {
    if (root == NULL) {
        return;
    }
    // todo 在哪里添加结点，添加哪些结点，不是显而易见
    if (root->val == p->val) {
        path.push_back(p);
        return;
//        path.push_back(p);
    } else if (root->val > p->val) {
        path.push_back(root);
        pathCore(root->left, p, path);
    } else {
        path.push_back(root);
        pathCore(root->right, p, path);
    }

}

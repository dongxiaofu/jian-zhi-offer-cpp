//
// Created by chugang on 2020/6/13.
//
/*
 * 输入两棵二叉树A和B，判断B是不是A的子结构。(约定空树不是任意一个树的子结构)
 * B是A的子结构， 即 A中有出现和B相同的结构和节点值。
 * 思路：
 * 将A、B前序遍历，并将结点存储到数组arr1、arr2中，若arr2是arr1的子数组，则B是A的子树。
 * 我认为，这是正确的，可leetcode认为不正确。
 * 的确不正确。找到了反例。
 * 我极难发现这个解法不全面。
 * 按层级打印的二叉树
 * [10,12,6,8,3,11]
[10,12,6,8]
 */
#include "Solution.h"

bool Solution::isSubStructure(TreeNode *A, TreeNode *B) {
    if (A == NULL || B == NULL) {
        return false;
    }
    vector<TreeNode *> Anodes = preOrderTraverse(A);
    vector<TreeNode *> Bnodes = preOrderTraverse(B);
    int ALen = Anodes.size();
    int BLen = Bnodes.size();
    for (int i = 0; i < ALen; i++) {
        int n = 0;
        int k = i;  // 这里，不能直接使用i，若直接使用i，i需要变化，可以i又在其他地方使用，增加了复杂性。
        for (int j = 0; j < BLen; j++) {
            TreeNode *Anode = Anodes[k++];
            TreeNode *Bnode = Bnodes[j];
            if (Anode != Bnode) {   // 两个树的结点，能用=比较吗？这里好像是可以。
                break;
            }

//            if (Anode->val != Bnode->val) {
//                break;
//            }
            n++;
        }
        if (n == BLen) {
            return true;
        }
    }
    return false;
}

vector<TreeNode *> Solution::preOrderTraverse(TreeNode *root) {
    vector<TreeNode *> nodes;
    preOrderTraverseCore(root, nodes);
    return nodes;
}

// 前序遍历：根左右
void Solution::preOrderTraverseCore(TreeNode *root, vector<TreeNode *> &nodes) {
    if (root == NULL) {
        return;
    }

    nodes.push_back(root);
    preOrderTraverseCore(root->left, nodes);
    preOrderTraverseCore(root->right, nodes);
}

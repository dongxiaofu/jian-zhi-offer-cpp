//
// Created by chugang on 2020/6/2.
//
/**************************************************************************
 * 根据中序遍历、前序遍历结果inArray、preArray重建二叉树，时间复杂度O(?)。
 * 思路：
 * 1.preArray[0]是根结点，设preArray[0]在inArray的位置是k。在inArray中，
 * inArray[k]是根结点。
 * 2.inArray[0]...inArray[k-1]是左子树，inArray[k+1]...inArray[inEndIndex]是
 * 右子树。
 * 3.对左子树和右子树，分别使用第1步、第2步。
 * 4.todo 【关键】如何找到根结点在inArray中的位置呢？
 * 4.1.遍历inArray，当inArray[i]=preArray[0]时，inArray[i]就是目标结点，即根结点。
 ***************************************************************************/
#include "Solution.h"

TreeNode *Solution::reConstructBinaryTree(vector<int> pre, vector<int> in) {
    int preSize = pre.size();
    int inSize = in.size();
    if (preSize * inSize == 0 || preSize != inSize) {
        return NULL;
    }

    TreeNode *pRoot = reConstructBinaryTreeCore(0, preSize - 1, pre, 0, inSize - 1, in);

    return pRoot;
}

TreeNode *Solution::reConstructBinaryTreeCore(int preStartIndex, int preEndIndex, vector<int> pre, int inStartIndex,
                                              int inEndIndex, vector<int> in) {
    // todo 边界条件，不能包含等于情况
    if (preStartIndex > preEndIndex || inStartIndex > inEndIndex) {
        return NULL;
    }

    TreeNode *node = new TreeNode(pre[preStartIndex]);
    for (int i = inStartIndex; i <= inEndIndex; i++) {  // todo 边界条件，i 能够等于 inEndIndex
        if (in[i] == pre[preStartIndex]) {
            // todo 假如，preStartIndex + i - inStartIndex = 4
            // todo 假如，preStartIndex + 1 = 2, [2,4]===2,3,4
            // todo 4-1=3,包括2,3,4共3个元素，不包括1。i - inStartIndex，不包括inStartIndex。
            // 纠结于这种细节问题，比较烦。这和啥特定知识有关？小学生都知道的常识。
            node->left = reConstructBinaryTreeCore(preStartIndex + 1, preStartIndex + i - inStartIndex, pre,
                                                   inStartIndex,
                                                   i - 1, in);
            node->right = reConstructBinaryTreeCore(preStartIndex + i - inStartIndex + 1, preEndIndex, pre, i + 1,
                                                    inEndIndex, in);
        }
    }

    return node;
}

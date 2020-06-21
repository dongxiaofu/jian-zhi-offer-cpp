//
// Created by chugang on 2020/6/21.
//
/********************************************************************
 * 输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历结果。如果是则返回 true，
 * 否则返回 false。假设输入的数组的任意两个数字都互不相同。
 * 思路：
 * postorder
 * 数组的最后一个元素是根结点的值，小于根结点的子数组是左子树，大于根结点的是右子树。
 * 1.postorder[len-1]是root。
 * 2.arr1是左子树。<====从postorder[0]到postorder[i-1]是左子树，postorder[i]
 * 不小于root。
 * 3.arr2是右子树。<===========> [postorder[i],postorder[len-2]]。
 * 4.若arr2存在元素小于root，该数组不是某二叉搜索树的遍历结果。
 * 难点：
 * 1.如何便利地从原始数组得到它的子数组？
 ********************************************************************/
#include "Solution.h"

bool Solution::verifyPostorder(vector<int> &postorder) {
    int len = postorder.size();
    if (len == 0) {
        return false;
    }
    int i = 0;
    int root = postorder[len - 1];
    for (; i < len-1; i++) {
        if (postorder[i] > root) {
            break;
        }
    }
    for (int j = i; j < len-1; j++) {
        if (postorder[j] < root) {
            return false;
        }
    }
    // todo 下面的 vector<int> rightChildren(postorder.begin() + i, postorder.end() - 1);
    // 不会在postorder[i]重合吗？
    vector<int> leftChildren(postorder.begin(), postorder.begin() + i);
    bool left = true;
    if (leftChildren.size() > 0) {
        left = verifyPostorder(leftChildren);
    }
    vector<int> rightChildren(postorder.begin() + i, postorder.end() - 1);
    bool right = true;
    if (rightChildren.size() > 0) {
        right = verifyPostorder(rightChildren);
    }

    return (left && right);
}
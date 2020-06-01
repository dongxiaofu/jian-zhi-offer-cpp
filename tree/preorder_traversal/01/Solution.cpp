//
// Created by chugang on 2020/6/1.
//
/************************************************************************
 * 二叉树的下一个结点，时间复杂度？
 * 思路：
 * 1.将二叉树T按中序遍历的顺序存储到vector中。
 * 1.1.中序遍历：左中右，先左子树，再根结点，最后右子树。
 * 2.遍历vector，当结点等于目标结点node vector[i]时，停止遍历。
 * 3.看是否存在node的下个结点vector[i+1]。
 * 3.1.若存在，vector[i+1]是目标结点。
 * 3.2.若不存在，不存在目标结点。
 * todo 上面的思路，仅仅在pNode是根结点的情况下适用。
 * todo 当pNode不是根结点时，情况有许多种，比如pNode是它的父结点的左子树、右子树。
 * todo 子树可能有孩子结点，有可能是叶子结点。情况太复杂，写代码也不太好写。应该有更合理
 * todo 的思路。
 * todo 我又发现，情况似乎不是特别复杂。先按这种思路写代码。
 * 1.当pNode是根结点
 * 1.1.下个结点是pNode的右子树的右叶子结点。
 * 2.当pNode不是根结点
 * 2.1.当pNode是左子树，目标结点是pNode的右子树的左叶子结点。
 * todo 我再次发现，情况很复杂，不想写这样的代码，可能也写不出来。放弃这种思路。
 * 学习到的别人的思路：
 * 1.如果结点pNode有右子树，那么，pNode的下个结点是右子树的最左子结点。
 * 2.如果pNode没有右子树，
 * 2.1.pNode是它的父结点的左子树，pNode的下个结点是它的父结点。
 * 2.2.pNode是它的父结点的右子树，pNode的下个结点是它的祖父结点（前提是，父结点是祖父
 * 结点的左结点）。
 ************************************************************************/
#include "Solution.h"

TreeLinkNode *Solution::GetNext(TreeLinkNode *pNode) {
    vector<TreeLinkNode *> nodes;
    if (pNode == NULL) {
        return NULL;
    }
    if (pNode->right != NULL) {     // 有右子树
        TreeLinkNode *currentNode = pNode->right;
        TreeLinkNode *left;
        while (currentNode != NULL) {
            left = currentNode;
            currentNode = currentNode->left;
        }
        return left;
    } else {    // 无右子树
        if (pNode->next == NULL) {    // 没有右子树，而且是根结点
            return NULL;
        }
        if (pNode->next->left == pNode) {     // 是左子结点
            return pNode->next;
        } else {      // 是右子结点，看它的父结点是不是祖父结点的子结点
            TreeLinkNode *parent = pNode->next;
            while (parent != NULL) {
                TreeLinkNode *grandfather = parent->next;
                if (grandfather == NULL) {
                    return NULL;
                }
                if (grandfather->left == parent) {
                    return grandfather;
                }
                parent = grandfather;
            }
        }
    }
    return NULL;
}

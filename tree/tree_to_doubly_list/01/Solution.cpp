//
// Created by chugang on 2020/6/14.
//
/**************************************************************************************
 * 输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的循环双向链表。
 * 要求不能创建任何新的节点，只能调整树中节点指针的指向。
 * 思路：
 * 1.将二叉搜索树中序遍历，得到非递减序列N。
 * 2.遍历N，将当前结点cur的left指向前一个元素，right指向后一个元素。
 * 3.将第一个元素的left指向最后一个元素，将最后元素的right执行第一个元素。
 * 难点：
 * 创建双向链表，思路不清晰，不迅速。
 ***************************************************************************************/
#include "Solution.h"

Node *Solution::treeToDoublyList(Node *root) {
    if (root == NULL) {
        return NULL;
    }
    vector<Node *> nodes;
    inOrderTraverse(root, nodes);

    // 创建双向链表
    int len = nodes.size();
    Node *head = nodes[0];
    // 只有一个结点的双向链表，不可用遗漏
    if (len == 1) {
        head->right = head;
        head->left = head;
        return head;
    }
    Node *pre = head;
    Node *current;

    for (int i = 1; i < len; i++) {
        current = nodes[i];
        pre->right = current;
        current->left = pre;
        pre = current;
    }

    current->right = head;
    head->left = current;
    return head;
}

// 中序遍历：左根右
void Solution::inOrderTraverse(Node *root, vector<Node *> &nodes) {
    if (root == NULL) {
        return;
    }
    inOrderTraverse(root->left, nodes);
    nodes.push_back(root);
    inOrderTraverse(root->right, nodes);
}

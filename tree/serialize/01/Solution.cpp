//
// Created by chugang on 2020/6/2.
//
/*******************************************************
 * 序列化和反序列化二叉树，时间复杂度O(?)。
 * 思路：使用中序遍历存储，序列化和反序列化都使用递归。
 * 序列化字符串str，二叉树根结点root。
 * 1.序列化
 * 1.1.如果结点node为空，str += '#'。
 * 1.2.如果node非空，str += node->val, str += '!'。
 * 1.3.递归序列化node->left。
 * 1.4.递归序列化node->right。
 * 2.反序列化。当前字符是ch。
 * 2.1.如果ch == '!' || ch == '#'，什么也不做。
 * 2.2.否则，创建结点node，node->val = ch。
 * 2.3.递归创建node->left。
 * 2.4.递归创建node->right。
 * 难点：todo 指针的使用。
 * 星级：5。
 *******************************************************/
#include "Solution.h"

char *Solution::Serialize(TreeNode *root) {
    string str;
    SerializeCore(root, str);
    // todo 将string转为char，没有使用str.c_str()。为啥不用？原因未知。
    int length = str.length();
    char *res = new char[length + 1];   // 多出来的1个单位（字节、位？）存储\0
    for (int i = 0; i < length; i++) {
        res[i] = str[i];
    }
    res[length] = '\0';
    return res;
}

TreeNode *Solution::Deserialize(char *str) {
    if (!str) {
        return NULL;
    }
    TreeNode *res = DeserializeCore(&str);
    return res;
}

void Solution::SerializeCore(TreeNode *root, string &str) {
    if (root == NULL) {
        str += '#';
        return;
    }
    str += to_string(root->val);
    str += '!';
    SerializeCore(root->left, str);
    SerializeCore(root->right, str);
}

// todo 递归时改变了str值使其指向后面的序列，因此要声明为char**
// todo 我还未完全掌握指针。这里用指针，是想在递归中让str的改变累计
TreeNode *Solution::DeserializeCore(char **str) {
    if (**str == '#') {
        (*str)++;
        return NULL;
    }
    int number = 0;
    while (**str != '\0' && **str != '!') {
        // todo **str - '0'，字符转数字的方法，'0'的ascii是48，'9'的ascii是57,刚好相差9。
        number += number * 10 + (**str - '0');
        (*str)++;
    }
    TreeNode *root = new TreeNode(number);

    if (**str == '\0') {
        return root;
    } else {
        (*str)++;
    }

    root->left = DeserializeCore(str);
    root->right = DeserializeCore(str);

    return root;
}

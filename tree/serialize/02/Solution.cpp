//
// Created by chugang on 2020/6/13.
//
/**
 * 你可以将以下二叉树：

    1
   / \
  2   3
     / \
    4   5

序列化为 "[1,2,3,null,null,4,5]"
 与01比，题意变化了
 */
#include "Solution.h"

string Solution::serialize(TreeNode *root) {
    queue<TreeNode *> Queue1;
    string str = "";
    bool start = false;
    Queue1.push(root);
    while (!Queue1.empty()) {
        TreeNode *node = Queue1.front();
        Queue1.pop();
        // 字符串开头不加逗号
        if (start) {
            str += ",";
        } else {
            start = true;
        }
        if (node == NULL) {
            str += "null";
        } else {
            // 将int数据转成对应的字符形式才能存储，而不是存储ascii码
            int v = node->val;
            string sign = "";
            if (v < 0) {
                sign = "-";
                v = -1 * v;
            }
//            char vStr = v + '0';  // 不能获得10的字符串形式，而是获得了冒号':'
            string vStr = to_string(v);
            str += sign + vStr;
            Queue1.push(node->left);
            Queue1.push(node->right);
        }
    }
    return str;
}

TreeNode *Solution::deserialize(string str) {
    int len = str.size();
    vector<TreeNode *> nodes;
    string item = "";
    for (int i = 0; i <= len; i++) {
        // 不要遗漏str[i] == '\0'
        if (str[i] == ',' || str[i] == '\0') {
            if (item == "null") {
                nodes.push_back(NULL);
            } else {
                int v = atoi(item.c_str());
                // 如果只是TreeNode *node，并不能进行node->left等操作。
                TreeNode *node = new TreeNode(v);
                node->left = node->right = NULL;
                nodes.push_back(node);
            }

            item = "";
            continue;
        }
        item += str[i];
    }

    int j = 1;
    int size = nodes.size();
    for (int i = 0; i < size; i++) {
        TreeNode *node = nodes[i];
        // NULL结点，要跳过
        if (node == NULL) {
            continue;
        }
        // j 必须小于size
        if (j < size) node->left = nodes[j++];
        if (j < size) node->right = nodes[j++];
    }
    return nodes[0];
}

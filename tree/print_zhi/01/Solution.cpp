//
// Created by chugang on 2020/6/2.
//
/***************************************************************
 * 按之字形顺序打印二叉树，时间复杂度O(N)。
 * 思路：与按层打印二叉树相似，可惜，我没能想到比较好的思路，只想到了基本完成
 * 功能的思路。
 * 1.用两个栈stack1、stack2交替存储每层结点。
 * 1.1.初始化，把pRoot入栈stack1。
 * 1.2.pRoot从stack1出栈，把它的左右子树入栈stack2，按照先左后右的顺序。
 * 1.3.左右子树从stack2出栈时，把它们的左右子树，按照先右后左的顺序。
 * todo 我又纠结于这样做是否能达到目的，其实，举例就可以验证一下。可我试图
 * 心算验证，而我又不太相信自己的心算能力。todo 这里是时间消耗很多的地方。
 ***************************************************************/
#include "Solution.h"

vector<vector<int>> Solution::Print(TreeNode *pRoot) {
    vector<vector<int>> result;
    if (pRoot == NULL) {
        return result;
    }

    stack<TreeNode *> stack1;
    stack<TreeNode *> stack2;

    stack1.push(pRoot);

    while (!stack1.empty() || !stack2.empty()) {
        vector<int> line;
        if (!stack1.empty()) {
            while (!stack1.empty()) {
                TreeNode *node = stack1.top();
                line.push_back(node->val);
                if (node->left != NULL) {
                    stack2.push(node->left);
                }
                if (node->right != NULL) {
                    stack2.push(node->right);
                }
                stack1.pop();
            }
        } else {
            while (!stack2.empty()) {
                TreeNode *node = stack2.top();
                line.push_back(node->val);
                if (node->right != NULL) {
                    stack1.push(node->right);
                }
                if (node->left != NULL) {
                    stack1.push(node->left);
                }
                stack2.pop();
            }
        }
        result.push_back(line);
    }
    return result;
}

//
// Created by chugang on 2020/6/26.
//
/************************************************************
 * 输入一棵二叉树和一个整数，打印出二叉树中节点值的和为输入整数的所有路径。
 * 从树的根节点开始往下一直到叶节点所经过的节点形成一条路径。
 * 思路：
 * 1.使用前序遍历。
 * 2.每遍历一个结点node，将这个结点加入路径path，然后比较当前和currentSum和
 * 期望值expectedSum是否相等，当然还有个前提：当前结点是叶子结点。
 * 2.1.若相等，将path放入paths。
 * 3.node->left不是NULL，递归查找。
 * 4.node->right不是NULL，递归查找。
 * 5.将2中存储的node弹出。
 * 6.代码写法：path不需要重置，path和paths都使用引用参数。
 *************************************************************/
#include "Solution.h"

vector<vector<int>> Solution::pathSum(TreeNode *root, int sum) {
    vector<vector<int>> paths;
    vector<int> path;
    findPath(root, path, paths, sum, 0);
    return paths;
}

void Solution::findPath(TreeNode *root, vector<int> &path, vector<vector<int> > &paths,
                        int expectedSum, int currentSum) {
    if (root == NULL) {
        return;
    }

    currentSum += root->val;
    path.push_back(root->val);

    bool isLeaf = (root->left == NULL) && (root->right == NULL);
    if (isLeaf && currentSum == expectedSum) {
        paths.push_back(path);
    }

    if (root->left != NULL) findPath(root->left, path, paths, expectedSum, currentSum);
    if (root->right != NULL) findPath(root->right, path, paths, expectedSum, currentSum);

    path.pop_back();
}

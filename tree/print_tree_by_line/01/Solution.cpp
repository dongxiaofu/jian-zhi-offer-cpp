//
// Created by chugang on 2020/6/1.
//
/****************************************
 * 把二叉树打印成多行，时间复杂度O(N)。
 * 思路：
 * 1.用"广度优先搜索"思路将根结点存到数组A中，再
 * 存储一个'#'。
 * 2.遍历数组，遇到'#'跳过，遇到结点，将它的子结点
 * 存储到数组中，再存储一个'#'。
 * 3.遍历终止的条件：元素遍历完毕。
 * 4.最后，从A中获取数据，将前面的元素存储到临时数组
 * T中。遇到'#'时，将T存储到结果数组R中。
 *
 * 问题：
 * 1.非亲兄弟结点，怎么打印到一行呢？
 * 1.1.参考别人的代码，使用queue解决了问题，用
 * vector应该也可以，但我没有找到合适的从vector
 * 删除第一个元素的方法。
 * 一起入队的元素，在同一批次统计queue长度时
 * 打印出来，这就把堂兄弟结点打印到了一行。
 ***************************************/
#include "Solution.h"

vector<vector<int>> Solution::Print(TreeNode *pRoot) {
    vector<vector<int>> result;
    if (pRoot == NULL) {
        return result;
    }
    // todo 初次使用 queue
    queue<TreeNode *> Queue;
    Queue.push(pRoot);  // 入队

    while (!Queue.empty()) {
        int size = Queue.size();
        vector<int> tmp;
        for (int i = 0; i < size; i++) {
            TreeNode *node = Queue.front(); // 队首
            tmp.push_back(node->val);
            if (node->left != NULL) {
                Queue.push(node->left);
            }
            if (node->right != NULL) {
                Queue.push(node->right);
            }
            Queue.pop();    // 出队
        }
        result.push_back(tmp);
    }

    return result;

//    vector<int> tmp;
//    for (int i = 0; i < nodeArray.size(); i++) {
//        TreeNode *node = nodeArray[i];
//        if (node->val == flag) {
//            result.push_back(tmp);
//            tmp = vector<int>();        // todo 注意，重新初始化vector
//        } else {
//            tmp.push_back(node->val);
//        }
//    }

}
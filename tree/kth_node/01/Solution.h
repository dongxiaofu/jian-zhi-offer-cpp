//
// Created by chugang on 2020/6/2.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <string>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode *KthNode(TreeNode *pRoot, int k);

private:
    void InOrderTraversal(TreeNode *pRoot, queue<TreeNode *> &nodeQueue);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

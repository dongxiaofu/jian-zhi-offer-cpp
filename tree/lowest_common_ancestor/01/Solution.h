//
// Created by chugang on 2020/6/13.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q);

private:
    vector<TreeNode *> path(TreeNode *root, TreeNode *p);

    void pathCore(TreeNode *root, TreeNode *p, vector<TreeNode *> &path);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

//
// Created by chugang on 2020/6/2.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <string>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSymmerical(TreeNode *pRoot);

    TreeNode *getImage(TreeNode *pRoot);

private:
    bool isSymmericalCore(TreeNode *pRoot, TreeNode *mirror);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

//
// Created by chugang on 2020/6/13.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>
#include <string>
#include <queue>

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
    string serialize(TreeNode *root);

    TreeNode *deserialize(string str);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

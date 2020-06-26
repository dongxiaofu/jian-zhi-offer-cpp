//
// Created by chugang on 2020/6/26.
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
    vector<vector<int>> pathSum(TreeNode *root, int sum);

private:
    void findPath(TreeNode *root, vector<int> &path, vector<vector<int>> &paths,
                  int expectedSum, int currentSum);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

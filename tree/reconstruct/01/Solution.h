//
// Created by chugang on 2020/6/2.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>
#include <string>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode *reConstructBinaryTree(vector<int> pre, vector<int> in);

private:
    TreeNode *reConstructBinaryTreeCore(int preStartIndex, int preEndIndex, vector<int> pre,
                                        int inStartIndex, int inEndIndex, vector<int> end);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

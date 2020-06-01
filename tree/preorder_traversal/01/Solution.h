//
// Created by chugang on 2020/6/1.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H
#include <string>
#include <vector>

using namespace std;

struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;

    TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

class Solution {
public:
    TreeLinkNode *GetNext(TreeLinkNode *pNode);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

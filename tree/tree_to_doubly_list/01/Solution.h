//
// Created by chugang on 2020/6/14.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>
#include "Node.h"

using namespace std;

class Solution {
public:
    Node *treeToDoublyList(Node *root);

private:
    void inOrderTraverse(Node *root, vector<Node *> &nodes);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

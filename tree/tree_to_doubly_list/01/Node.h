//
// Created by chugang on 2020/6/14.
//

#ifndef JIAN_ZHI_OFFER_CPP_NODE_H
#define JIAN_ZHI_OFFER_CPP_NODE_H

#include <string>

class Node {
public:
    int val;
    Node *left;
    Node *right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node *_left, Node *_right) {
        val = _val;
        left = _left;
        right = _right;
    }
};


#endif //JIAN_ZHI_OFFER_CPP_NODE_H

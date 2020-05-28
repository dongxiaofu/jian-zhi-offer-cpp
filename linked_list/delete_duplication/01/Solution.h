//
// Created by chugang on 2020/5/28.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>

using namespace std;

//struct ListNode {
//    int val;
//    struct ListNode *next;
//
//    ListNode(int x) :
//            val(x), next(NULL) {}
//
////    ListNode(int x) :
////            val(x), next(NULL) {}
//};

struct ListNode {
    int val;
    struct ListNode *next;
    // todo struct 里也有这种写法？是C++独有、C里面没有的写法吗？
    ListNode(int x) :
            val(x), next(NULL) {}

};

class Solution {
public:
    ListNode *deleteDuplication(ListNode *pHead);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

//
// Created by chugang on 2020/6/26.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>
#include <stdlib.h>

using namespace std;

class Solution {
public:
    bool isStraight(vector<int> &nums);

private:
    static int compare(const void *arg1, const void *arg2);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

//
// Created by chugang on 2020/6/25.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    vector<double> twoSum(int n);

private:
    int getNSumCount(int n, int sum);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

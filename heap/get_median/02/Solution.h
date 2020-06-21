//
// Created by chugang on 2020/6/21.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>
#include "algorithm"

using namespace std;

class Solution {
public:
    void Insert(double num);

    double GetMedian();

private:
    vector<double> max;
    vector<double> min;
    int counter = 0;
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

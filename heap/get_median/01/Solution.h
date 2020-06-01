//
// Created by chugang on 2020/6/1.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>
#include "algorithm"

using namespace std;

class Solution {
private:
    vector<double> min;
    vector<double> max;
public:
    void Insert(double num);

    double GetMedian();
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

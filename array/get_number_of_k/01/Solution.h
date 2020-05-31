//
// Created by chugang on 2020/5/31.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H
#include <vector>

using namespace std;

class Solution {
public:
    int GetNumberOfK(vector<int> array, int k);

private:
    int HalfSearch(vector<int> array, int k);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

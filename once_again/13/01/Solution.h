//
// Created by chugang on 2020/6/27.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int movingCount(int m, int n, int k);

private:
    int movingCountCore(int row, int col, int k, bool *visited, int m, int n);

    int sum(int num);

    vector<int> getDigitOfNum(int num);

    bool check(int row, int col, int k, bool *visited, int m, int n);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

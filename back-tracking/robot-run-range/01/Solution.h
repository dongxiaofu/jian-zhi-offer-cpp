//
// Created by chugang on 2020/5/26.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <cstring>

class Solution {
public:
    int movingCount(int threshold, int rows, int cols);

private:
    int movingCountCore(int threshold, int rows, int cols, int row, int col, bool *visited);

    int checkCoordinate(int threshold, int row, int col);

    int sumOfInteger(int n);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

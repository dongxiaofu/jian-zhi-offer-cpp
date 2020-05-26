//
// Created by chugang on 2020/5/26.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <cstring>


class Solution {
public:
    bool hasPath(char *matrix, int cols, int rows, char *str);

    bool hasPathCore(char *matrix, int cols, int rows, char *str,
                     int col, int row, int &pathLength, bool *visited);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

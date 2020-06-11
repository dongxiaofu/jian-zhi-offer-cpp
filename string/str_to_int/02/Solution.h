//
// Created by chugang on 2020/6/11.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <climits>
#include <cstring>

class Solution {
public:
    int t_atoi(const char *str);
private:
    bool isOutOfRange(int number, int modNumber);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

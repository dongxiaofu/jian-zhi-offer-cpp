//
// Created by chugang on 2020/5/27.
//

#include "Solution.h"

double Solution::Power(double base, int exponent) {
    bool negative = false;
    if (exponent < 0) {
        negative = true;
        exponent = -exponent;
    }
    double res = 1;
    for (int i = 0; i < exponent; i++) {
        res *= base;
    }

    if (negative) {
        return double(1 / res);
    } else {
        return double(res);
    }
}
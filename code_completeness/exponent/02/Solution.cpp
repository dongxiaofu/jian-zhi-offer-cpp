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
    double res = PowerCore(base, exponent);
    if (negative) {
        return 1 / res;
    } else {
        return res;
    }
}

double Solution::PowerCore(double base, int exponent) {
    if (exponent == 1) {
        return base;
    }
    if (exponent == 2) {
        return base * base;
    }
    return PowerCore(base, exponent - 1) * base;
}
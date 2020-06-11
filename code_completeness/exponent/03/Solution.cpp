//
// Created by chugang on 2020/6/11.
//
/**
 * 没想到，看似简单，却很容易出错。
 */
#include "Solution.h"

double Solution::MyPower(double base, int exponent) {
    if (base == 0) {
        return 0;
    }
    if (exponent == 0) {
        return 1;
    }
    int sign = 1;
    int absoluteExponent = exponent;
    if (exponent < 0) {
        sign = -1;
        absoluteExponent = -1 * exponent;
    }
    vector<double> powerValues;
    powerValues.push_back(base);    // 1 - 0
    powerValues.push_back(base * base); // 2 - 1
    powerValues.push_back(powerValues[1] * base);   // 3 - 2

    double temp = 1;
    if (absoluteExponent <= 3) {
        temp = powerValues[absoluteExponent - 1];
//        powerValues.push_back(temp);
    } else {
        for (int i = 4; i <= absoluteExponent; i++) {   // 必须包含等于
            temp = powerValues[i - 2] * base;   // i-2 而不是 i-1，极容易出错
            powerValues.push_back(temp);
        }
    }

    double result;
    if (sign == 1) {
        result = temp;
    } else {
        result = 1 / temp;
    }

    return result;
}
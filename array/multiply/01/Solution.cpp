//
// Created by chugang on 2020/6/1.
//
/********************************************************
 * 构建乘积数组，时间复杂度O(N)。今天做题少，这道题，充充数量。
 ********************************************************/
#include "Solution.h"

vector<int> Solution::multiply(const vector<int> &A) {
    vector<int> B;
    int size = A.size();
    if (size == 0) {
        return B;
    }
    for (int i = 0; i < size; i++) {
        int product = 1;
        for (int j = 0; j < size; j++) {
            if (j == i) {
                continue;
            }
            product *= A[j];
        }
        B.push_back(product);
    }
    return B;
}
//
// Created by chugang on 2020/6/19.
//
/***************************************
 * 不能彻底理解这个思路。
 ***************************************/
#include "Solution.h"

vector<int> Solution::multiply(const vector<int> &A) {
    int len = A.size();
    vector<int> B(len, 1);
    int left = 1;
    for (int i = 0; i < len; i++) {
        B[i] = left;
        left *= A[i];
    }
    int right = 1;
    for (int i = len - 1; i >= 0; i--) {
        B[i] *= right;
        right *= A[i];
    }
    return B;
}

//
// Created by chugang on 2020/5/27.
//

#include "Solution.h"

void Solution::reOrderArray(vector<int> &array) {
    int size = array.size();
    vector<int> res;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 1) {
            res.push_back(array[i]);
        }
    }
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            res.push_back(array[i]);
        }
    }
    array = res;
}
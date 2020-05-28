//
// Created by chugang on 2020/5/28.
//
/**
 * 滑动窗口的最大值
 * 时间复杂度O(n)
 */
#include "Solution.h"

vector<int> Solution::maxInWindows(const vector<int> &num, unsigned int size) {
    int length = num.size();
    vector<int> maxValues;
    for (int i = 0; i < length; i++) {
        int max = -65536;
        int counter = 0;
        for (int j = i; j < length; j++) {
            if (num[j] > max) {
                max = num[j];
            }
            counter++;
            if (counter == size) {
                maxValues.push_back(max);
            }
        }
    }
    return maxValues;
}

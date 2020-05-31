//
// Created by chugang on 2020/5/28.
//
/**
 * 滑动窗口的最大值，时间复杂度O(n)。
 * 思路：
 * 1.遍历num，把第一个元素作为起点，与后面size-1个元素比较，找出最大值max。把max存起来。
 * 2.依次将每个元素作为起点，重复执行第1步。
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

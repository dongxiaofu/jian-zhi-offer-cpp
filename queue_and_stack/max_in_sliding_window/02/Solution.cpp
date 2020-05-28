//
// Created by chugang on 2020/5/28.
//
/********************************************************************
 * 时间复杂度不稳定。
 * 我觉得是优化了一些。
 * 思路：
 * 1.求出第一个滑动窗口的最大值。
 * 2.求出从1开始的剩余所有滑动窗口的末尾索引。只需比较当前最大值与滑动窗口的末尾值，
 * 哪个数大，哪个数就是新窗口的最大值。当然，若当前最大值不在当前窗口，需用原始方
 * 法获取最大值。
 ********************************************************************/
#include "Solution.h"

vector<int> Solution::maxInWindows(const vector<int> &num, int size) {
    int length = num.size();
    vector<int> maxValues;

    if (size == 0 || length < size) {
        return maxValues;
    }
    int max = -65536;   // todo 一个足够小的值，num中的所有数字都比它大。有更好的替换方法吗?
    int maxIndex = -1;
    for (int i = 0; i < size; i++) {
        if (num[i] > max) {
            max = num[i];
            maxIndex = i;
        }
    }
    maxValues.push_back(max);

    for (int i = 1; i < length; i++) {
        int windowEndIndex = i + size - 1;
        if (windowEndIndex >= length) {
            break;
        }
        if (maxIndex < i) {
            // todo 这里，不能是int max。如果是int max，在for中，使用的仍然是全局变量max，无法
            // todo 获取j->windowEndIndex中的最大值。
            max = -65536;
            for (int j = i; j <= windowEndIndex; j++) {
                if (num[j] > max) {
                    max = num[j];
                    maxIndex = j;
                }
            }
        } else {
            if (num[windowEndIndex] > max) {
                max = num[windowEndIndex];
            }
        }
        maxValues.push_back(max);
    }
    return maxValues;
}
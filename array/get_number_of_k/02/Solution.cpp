//
// Created by chugang on 2020/5/31.
//
/********************************************************
 * 数字在排序数组中出现的次数。时间复杂度O(N)。
 * 思路：遍历输入数据input，比较每个item，若item等于k，计算器加1。
 ********************************************************/
#include "Solution.h"

int Solution::GetNumberOfK(vector<int> array, int k) {
    int length = array.size();
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (array[i] == k) {
            counter++;
        }
    }

    return counter;
}

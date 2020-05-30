//
// Created by chugang on 2020/5/30.
//
/******************************************************************
 * 连续子数组的最大和，时间复杂度O(N2)。
 * 思路：
 * 1.以第一个元素为起点，求子序列元素之和，获取最大值。
 * 2.依次以每个元素为起点，重复第1步，获取最大值。
 *****************************************************************/
#include "Solution.h"

int Solution::FindGreatestSumOfSubArray(vector<int> array) {
    int size = array.size();
    int max_sum = -65536;   // todo 可以改成 int max_sum = 0x80000000
    // todo 0x80000000 是 - 2的32次方
    for (int i = 0; i < size; i++) {
        int sum = array[i];
        if (sum > max_sum) {
            max_sum = sum;
        }
        for (int j = i + 1; j < size; j++) {
            sum += array[j];
            if (sum > max_sum) {
                max_sum = sum;
            }
        }
    }
    return max_sum;
}
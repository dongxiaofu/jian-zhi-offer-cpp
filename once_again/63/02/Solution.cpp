//
// Created by chugang on 2020/6/27.
//
/*************************************************************
 * 假设把某股票的价格按照时间先后顺序存储在数组中，请问买卖该股票一次可能
 * 获得的最大利润是多少？
 * 思路：
 * 1.遍历arr，当前元素arr[i]。将[0,i-1]中的最小值存储到min。
 * 2.maxDiff = arr[i] - min。maxDiff存储最大值。
 *************************************************************/
#include "Solution.h"

int Solution::maxProfit(vector<int> &price) {
    int len = price.size();
    if (len < 2) {
        return 0;
    }
    int min = price[0];
    int max = 0;
    for (int i = 1; i < len; i++) { // i的起始值是1，不是2
        if (price[i - 1] < min) {
            min = price[i - 1];
        }
        int diff = price[i] - min;
        if (diff > max) {
            max = diff;
        }
    }
    return max;
}

//
// Created by chugang on 2020/6/27.
//
/*************************************************************
 * 假设把某股票的价格按照时间先后顺序存储在数组中，请问买卖该股票一次可能
 * 获得的最大利润是多少？
 * 思路：
 * 1.双重循环。第一层循环，起点是i=0;第二层循环，起点是j=i+1。
 * 2.max = price[i+1] - price[i]。max取最大值。
 *************************************************************/
#include "Solution.h"

int Solution::maxProfit(vector<int> &price) {
    int max = 0;
    int len = price.size();
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (price[j] - price[i] > max) {
                max = price[j] - price[i];
            }
        }
    }
    return max;
}

//
// Created by chugang on 2020/9/25.
//
/****************************************************
 * 和为s的连续正数序列
 * 输入一个正整数 target ，输出所有和为 target 的连续正整数序列（至少含有两个数）。
 * 序列内的数字由小到大排列，不同序列按照首个数字从小到大排列。
 * 思路：
 * 1.两层循环。
 * 2.第一层循环的终止条件是，第一个数等于target。
 * 3.第二层循环的终止条件是，所有数的和大于或等于target。
 ****************************************************/
#include "Solution.h"

vector<vector<int> > Solution::findContinuousSequence(int target) {
    vector<vector<int>> result;
    for (int i = 1; i <= target / 2; i++) {
        int sum = 0;
        vector<int> sequence;
        int j = i;
        while (sum < target) {
            sequence.push_back(j);
            sum += j++;
        }
        if (sum == target) {
            result.push_back(sequence);
        }
    }

    return result;
}

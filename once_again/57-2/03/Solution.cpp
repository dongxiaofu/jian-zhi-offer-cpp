/****************************************************
 * 和为s的连续正数序列
 * 思路：
 ****************************************************/
#include "Solution.h"

vector<vector<int> > Solution::findContinuousSequence(int target) {
    vector<vector<int>> result;     // todo 初始化空值可以怎么写？
    if (target <= 1) {
        return result;
    }
    int small = 1;
    int big = 2;
    int middle = (target) / 2; // 与 int middle = (target + 1) / 2; 效果相同
    while (small <= middle) {
        int curSum = 0;
        vector<int> arr;
        for (int start = small; start <= big; start++) {
            arr.push_back(start);
            curSum += start;
        }
        if (curSum == target) {
            result.push_back(arr);
            small++;
        } else if (curSum > target) {
            small++;
        } else {
            big++;
        }
    }

    return result;
}
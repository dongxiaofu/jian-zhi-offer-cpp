/****************************************************
 * 和为s的连续正数序列
 * 思路：
 * 1.目标数是target。
 * 2.分别能统计2个、3个、4个，直至target个连续数的和是否为target。
 * 3.与第一种思路的区别在于，求和使用了公式 (start + end)*num/2。
 ****************************************************/
#include "Solution.h"

vector<vector<int> > Solution::findContinuousSequence(int target) {
    vector<vector<int>> result;     // todo 初始化空值可以怎么写？
    if (target <= 1) {
        return result;
    }
    for (int num = 2; num < target; num++) {
        for (int start = 1; start < target; start++) {
            int end = start + num - 1;
            int sum = (start + end) * num / 2;
            if (sum == target) {
                vector<int> arr;
                for (int count = 0; count < num; count++) {
                    int item = start++;
                    arr.push_back(item);
                }
                result.push_back(arr);
            }
        }
    }

    return result;
}
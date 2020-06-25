//
// Created by chugang on 2020/6/25.
//
/**********************************************************************************
 * 把n个骰子扔在地上，所有骰子朝上一面的点数之和为s。输入n，打印出s的所有可能的值出现的概率。
 * 你需要用一个浮点数数组返回答案，其中第 i 个元素代表这 n 个骰子所能掷出的点数集合中第 i 小的那个
 * 的概率。
 * 思路：
 * 1.核心在getNSumCount。
 * 1.1.当n < 1时，无论sum是多少，骰子之和为sum的情况都不可能出现。
 * 1.2.当sum < n时，不可能出现。<===========每个骰子的点数都是1，n个骰子点数之和是n，sum小于
 * 最小值的情况不可能出现。
 * 1.3.n个骰子点数之和的最大值是n * 6，sum大于最大值的情况不可能出现。
 * 1.4.当n=1时，骰子点数为sum的情况，只有一种。
 * 1.5.在上面所有情况之外，剩余情况，骰子点数之和：
 * 1.5.1.当第一个骰子点数是1，其他骰子点数之和是sum-1，满足这种组合的情况：
 * getNSumCount(n-1,sum-1)===>n-1个骰子点数之和是sum-1的情况数量。
 * 1.5.2.当第一个骰子点数是2，其他骰子点数之和是sum-2，满足这种组合的情况：
 * getNSumCount(n-1,sum-2)===>n-1个骰子点数之和是sum-2的情况数量。
 * 1.5.3.还有第一个骰子点数是3、4、5、6的情况，按照上面相同的情况分析。
 * 2.twoSum
 * 2.1.n个骰子点数之和，最小值是n，最大值是n * 6。
 * 2.2.n <= sum << n * 6，计算每个sum出现的次数count，并计算所有count之和total。
 * 2.3.依次计算每个count出现的概率：ratio = count / total。
 * 注意：
 * 时间复杂度过大，不能通过leetcode。
 * 昨天理解不了这个解法，今天看一次就理解了。===>小技巧，当时理解不了，可以转做其他事情，后面再看
 * 理解不了的问题。
 **********************************************************************************/
#include "Solution.h"

vector<double> Solution::twoSum(int n) {
    vector<int> counts;
    int total = 0;
    for (int i = n; i <= 6 * n; i++) {
        int count = getNSumCount(n, i);
        counts.push_back(count);
        total += count;
    }
    vector<double> ratios;
    for (int count:counts) {
        double ratio = (double(count)) / total;
        ratios.push_back(ratio);
    }
    return ratios;
}

int Solution::getNSumCount(int n, int sum) {
    if (n < 1 || sum < n || sum > 6 * n) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int count = getNSumCount(n - 1, sum - 1) + getNSumCount(n - 1, sum - 2)
                + getNSumCount(n - 1, sum - 3) + getNSumCount(n - 1, sum - 4)
                + getNSumCount(n - 1, sum - 5) + getNSumCount(n - 1, sum - 6);
    return count;
}

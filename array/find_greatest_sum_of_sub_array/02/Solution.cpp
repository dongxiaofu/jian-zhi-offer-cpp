//
// Created by chugang on 2020/5/30.
//
/******************************************************************
 * 连续子数组的最大和，时间复杂度O(N)。
 * 思路：
 * 1.设array的第i个元素array[i]之前的子序列的和为nCreateSum。
 * 当nCreateSum<=0时，array[start]+...+array[i]的和的最大值是array[i]；
 * 当nCreateSum>0时，array[start]+...+array[i]的和的最大值是nCreateSum
 * +array[i]。
 * 注意：用了分治思想的解法，我不能透彻理解。
 * 上面的思路说明，似乎是错误的。换种说明。
 * array[start]+...+array[i-1]最大，还是array[start]+...+array[i]最
 * 大？
 * 设
 * f（i) = array[start]+...+array[i]
 * f(i-1) = array[start]+...+array[i-1]
 * 当f(i-1)<=0时，和最大的子序列是array[i]；
 * 当f(i-1)>0时，和最大的子序列是array[start]+...+array[i]。
 *****************************************************************/
#include "Solution.h"

int Solution::FindGreatestSumOfSubArray(vector<int> array) {
    int maxSum = 0x80000000;
    int nCreateSum = 0;
    int length = array.size();
    for (int i = 0; i < length; i++) {
        if (nCreateSum <= 0) {
            nCreateSum = array[i];
        } else {
            nCreateSum += array[i];
        }
        if (nCreateSum > maxSum) {
            maxSum = nCreateSum;
        }
    }
    return maxSum;
}
//
// Created by chugang on 2020/6/26.
//
/******************************************************************
 * 从扑克牌中随机抽5张牌，判断是不是一个顺子，即这5张牌是不是连续的。2～10为数字
 * 本身，A为1，J为11，Q为12，K为13，而大、小王为 0 ，可以看成任意数字。A 不能
 * 视为 14。
 * 思路：
 * 1.将数字排序。
 * 2.比较相邻两个数字之间的差值之和n1。
 * 3.统计数字数组中0的数量n2。
 * 4.若n1 <= n2，返回true；否则，返回false。
 * 5.对了，若数组中存在相等的非零数字，返回false。<======包含相等数字不是顺子。
 * 注意：
 * 1.我不能熟练写出高效的排序代码，比如堆排序、快速排序。
 * 2.0的万能作用，我没能很快想出好办法。
 ******************************************************************/
#include "Solution.h"

bool Solution::isStraight(vector<int> &nums) {
    int size = nums.size();
    int *arr = new int[size];
    int i = 0;
    for (auto num:nums) {
        arr[i++] = num;
    }
    qsort(arr, size, sizeof(int), compare); // 等价于 sort(arr, arr+length);
    int numOfZero = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == 0) {
            numOfZero++;
        } else {
            break;
        }
    }
    int diff = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == 0) {
            continue;
        }
        if (i + 1 < size) {
            if (nums[i + 1] == nums[i]) {   // 非0数相等，返回false
                return false;
            }
            diff += nums[i + 1] - nums[i] - 1;      // 差距大于1
        }
    }

//    if (diff == numOfZero) {
    if (diff <= numOfZero) {
        return true;
    }

    return false;
}

int Solution::compare(const void *arg1, const void *arg2) {
    return (*(int *) arg1 - *(int *) arg2);
}

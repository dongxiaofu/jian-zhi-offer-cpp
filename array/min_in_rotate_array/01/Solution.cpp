//
// Created by chugang on 2020/5/27.
//

#include "Solution.h"
/************************************************************
 * 时间复杂度O(n)。
 * 结果有三种情况：
 * 1.旋转数组长度是0。
 * 2.旋转数组中的元素是递增序列，正常处理，第一次出现arr[i+1]<arr[i]，
 * arr[i+1]就是目标数字。
 * 3.旋转数组，没有旋转，或，数组中的所有数字都相等。目标数字，arr[0]。
 * 题目中说明了前两种情况，第三种，隐含条件。
 * todo，我有点纠结于第三种情况。
 ************************************************************/
int Solution::minNumberInRotateArray(std::vector<int> rotateArray) {
    int size = rotateArray.size();
    if (size == 0) {
        return 0;
    }
    for (int i = 0; i < size; i++) {
        if (i + 1 < size) {
            if (rotateArray[i + 1] < rotateArray[i]) {
                return rotateArray[i + 1];
            }
        }
    }
    return rotateArray[0];
}
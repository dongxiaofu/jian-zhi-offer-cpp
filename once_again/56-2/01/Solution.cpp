//
// Created by chugang on 2020/6/27.
//
/****************************************************
 * 数组中数字出现的次数 II
 * 在一个数组 nums 中除一个数字只出现一次之外，其他数字都出现了
 * 三次。请找出那个只出现一次的数字。
 * 思路：
 * 1.将数组中的元素的二进制形式的对应位相加，和为sum。
 * 2.若sum % 3 == 1，表示目标数字对应位置的数字是1，否则是0。
 * 3.将二进制数转为十进制数。
 * 4.十进制数和二进制数的互相转换：
 * 4.1.十进制数num转二级制：将num分别与1、10、10求与运算，
 * 结果为二进制形式对应的数字。
 * 4.2.二进制num(最高位存储在num[0])转十进制：
 * int result = 0;
 * while(condition){
 *      result = result << 1;
 *      result += num[i];
 * }
 * return result;
 ****************************************************/
#include "Solution.h"

int Solution::singleNumber(vector<int> &nums) {
    int len = nums.size();
    int bitSum[32] = {0};
    for (int i = 0; i < len; i++) {
        int bitMask = 1;    // 似乎应该是：long bitMask = 1。因为位移32次后，溢出了
        for (int j = 31; j >= 0; j--) {
            int bit = nums[i] & bitMask;
            if (bit != 0) {
                bitSum[j] += 1;
            }
            bitMask <<= 1;
        }
    }
    int result = 0;
    for (int i = 0; i < 32; i++) {
        result = result << 1;
        result += bitSum[i] % 3;
    }

    return result;
}

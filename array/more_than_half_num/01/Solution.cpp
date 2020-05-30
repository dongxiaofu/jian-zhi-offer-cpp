//
// Created by chugang on 2020/5/30.
//
/******************************************************
 * 数组中出现次数超过一半的数字，时间复杂度O(n)。
 * 思路：
 * 1.使用数组建立简单hash表，目标数组中的元素item为键，item
 * 出现的次数是值。
 * 2.遍历目标数组，查询每个元素在hash表中的值，大于数组长度一
 * 半的元素是目标元素；若没找到这种元素，返回0。
 * 注意：因为hash_table初始化问题，花了比较多时间找出问题。
 * 使用 new int[10]，我在ide断点调试，看不到数组元素。
 ******************************************************/
#include "Solution.h"

int Solution::moreThanHalfNum(vector<int> nums) {
    int size = nums.size();
    if (size == 0) {
        return 0;
    }
    // todo 初始化不可缺少，否则，有时会出现问题。
    // todo 无初始，本地无问题，牛客网不能通过。
    // todo memset(hash_table,0,size)不正确，第三个参数应该是size * sizeof(int)。
    int *hash_table = new int[size];
    for (int i = 0; i < size; i++) {
        hash_table[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        int item = nums[i];
        if (hash_table[item] == 0) {
            hash_table[item] = 1;
        } else {
            hash_table[item] = hash_table[item] + 1;
        }
    }

    int flag = size / 2;
    for (int i = 0; i < size; i++) {
        int item = nums[i];
        int value = hash_table[item];
        if (value > flag) {
            return item;
        }
    }

    return 0;
}

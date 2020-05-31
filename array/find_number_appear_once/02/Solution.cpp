//
// Created by chugang on 2020/5/31.
//
/************************************************************************
 * 数组中只出现一次的数字，时间复杂度为O(N)。使用空间极多。
 * 思路：
 * 设输入数据是input，目标数据是num1、num2。
 * 1.用简单hash_table表存储input中每个元素出现的次数，input[item] = num。
 * 1.1遍历input，或最大值max，hash_table的size是max+1。
 * 2.遍历hash_table，第一个num为1的item存储到num1中，第二个num为1的item存储到num2
 * 中。
 ************************************************************************/
#include "Solution.h"

void Solution::FindNumsAppearOnce(vector<int> data, int *num1, int *num2) {
    int length = data.size();
    if (length == 0) {
        return;
    }

    int max = 0x80000000;
    for (int i = 0; i < length; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    int hash_table_size = max + 1;
    int *hash_table = new int[hash_table_size];
    memset(hash_table, 0, sizeof(int) * hash_table_size);
    for (int i = 0; i < length; i++) {
        int item = data[i];
        if (hash_table[item] == 0) {
            hash_table[item] = 1;
        } else {
            hash_table[item] = hash_table[item] + 1;
        }
    }

    int couter = 0;
    for (int i = 0; i < hash_table_size; i++) {
        if (hash_table[i] == 1) {
            if (couter == 0) {
                *num1 = i;
            } else if (couter == 1) {
                *num2 = i;
            }
            couter++;
        }
        if (couter == 2) {
            break;
        }
    }
}

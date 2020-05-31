//
// Created by chugang on 2020/5/31.
//
/********************************************************
 * 数字在排序数组中出现的次数。时间复杂度，比"二分法"大。
 * 思路：
 * 1.先用二分法找出k在输入数据input中的位置p。
 * 2.以p为起点，遍历input，遇到不等于k的元素时停止，并统计k出现的
 * 次数C1。
 * 3.以p为终点，遍历input，遇到不等于k的元素时停止，并统计k出现的次
 * 数C2。
 * 4.k出现的次数C=C1 + C2。
 * 注意：我写出二分法，还需要考虑一两分钟。
 * todo 注意代码中的容易出错的地方。
 ********************************************************/
#include "Solution.h"

int Solution::GetNumberOfK(vector<int> array, int k) {
    int length = array.size();
    if (length == 0) {
        return 0;
    }
    int index = HalfSearch(array, k);
    if (index == -1) {
        return 0;
    }
    // todo 容易出错。以index为起点，分别向前后遍历。
    int counter = 0;
    for (int i = index; i < length; i++) {
        if (array[i] == k) {
            counter++;
        } else {
            break;
        }
    }

    for (int i = index - 1; i >= 0; i--) {
        if (array[i] == k) {
            counter++;
        } else {
            break;
        }
    }

    return counter;
}

int Solution::HalfSearch(vector<int> array, int k) {
    int low = 0;
    int high = array.size() - 1;
    int mid = -1;

    while (low < high) {
        mid = (high + low) / 2;
        if (array[mid] == k) {
            return mid;
        } else if (k > array[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return mid;
}

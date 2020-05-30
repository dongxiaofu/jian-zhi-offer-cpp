//
// Created by chugang on 2020/5/30.
//

/******************************************************************
 * 最小的K个数，时间复杂度（快排的时间复杂度）。
 * 思路：先对输入数据排序，非递减。使用未优化的快速排序。
 * 快速排序的思路：
 * 1.选择一个基准值pivot，然后分别从输入数据input的头尾往中间移动，分别是low,
 * high。
 * 2.当input[high]<pivot时，交换input[low]和input[high]。
 * 3.当input[low]>pivot时，交换input[low]和input[high]。
 * 4.循环维持的条件是：low<high。
 * 注意：代码中的边界条件，我暂时未理解为何需要等于。
 * 星级：4
 ******************************************************************/
#include "Solution.h"

vector<int> Solution::getLeastNumbers(vector<int> input, int k) {
    vector<int> minValues;
    int size = input.size();
    if (k > size) {
        return minValues;
    }
    int high = size - 1;
    qSort(input, 0, high);
    for (int i = 0; i < k; i++) {
        minValues.push_back(input[i]);
    }
    return minValues;
}
// todo 需要修改input，使用&
void Solution::qSort(vector<int> &input, int low, int high) {
    if (low < high) {
        int pivot = partition(input, low, high);
        qSort(input, low, pivot - 1);
        qSort(input, pivot + 1, high);
    }
}
// todo 需要修改input，使用&
int Solution::partition(vector<int> &input, int low, int high) {
    int pivot = input[low];
    while (low < high) {
        // todo input[high] >= pivot 为何需要"="呢？
        while (low < high && input[high] >= pivot) {
            high = high - 1;
        }
        swap(&input[low], &input[high]);
        // todo input[low] <= pivot 为何需要"="呢？
        while (low < high && input[low] <= pivot) {
            low = low + 1;
        }
        // todo 给指针参数传递int值，使用&
        swap(&input[low], &input[high]);
    }
    return low;
}

// todo 交换两个数，用指针
void Solution::swap(int *a, int *b) {
    if (*a == *b) {
        return;
    }
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

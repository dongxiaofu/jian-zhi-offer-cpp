//
// Created by chugang on 2020/5/31.
//
/************************************************************************
 * 数组中只出现一次的数字，时间复杂度为快速度的时间复杂度。而后者的时间复杂度，我不记得。
 * 思路：
 * 将输入数据input快速排序后得到sorted_input，逐个比较sorted_input的当前元素item
 * 和下个元素next_item，若二者不相等，这两个数据是目标数据；否则，继续遍历。
 * todo 上面的思路有问题，例如[1,2,2,3]，按上面的方法，目标数据是1，2。
 * 正确的思路：
 * sorted[i]、sorted[i+1]、sorted[i+2]，
 * 比较sorted[i]、sorted[i+2]，如果二者不相等，...这个思路也不对。
 * todo 按照消除重复元素的方法，可以到达目的，可代码量稍微有点多。
 * 快排的思路：我只理解了未优化的快排思路。
 * 1.选定基准值pivot，把大于pivot的元素放到数组后面，把小于pivot的元素放到数组前面。
 * 2.实现第1步的方法是，交换low和high元素的位置。
 * 3.得到小于pivot的序列lessVs和大于pivot的序列greaterVs。
 * 4.分别对lessVs和greaterVs执行第1步到第3步操作。
 * 5.当low >= high时，程序结束。
 ************************************************************************/
#include "Solution.h"

void Solution::FindNumsAppearOnce(vector<int> data, int *num1, int *num2) {
    int size = data.size();
    if (size == 0) {
        return;
    }
    Qsort(data, 0, size - 1);
//    for (int i = 0; i < size; i++) {
//        if (i + 1 < size) {
//            if (data[i] != data[i + 1]) {
//                *num1 = data[i];
//                *num2 = data[i + 1];
//                break;
//            }
//        }
//    }
    stack<int> stack1 = DeleteDuplicationNum(data);
    if (!stack1.empty()) {
        int top = stack1.top();
        *num1 = top;        // todo 留意指针获取返回值
//        *num1 = stack1.top();       // Exception: EXC_BAD_ACCESS (code=1, address=0x0)
        stack1.pop();
    }
    if (!stack1.empty()) {
        int top = stack1.top();
        *num2 = top;        // todo 留意指针获取返回值
//        *num2 = stack1.top();
        stack1.pop();
    }
}

void Solution::Qsort(vector<int> &data, int low, int high) {
    if (low < high) {
        int pivot = Partition(data, low, high, data[low]);
        Qsort(data, low, pivot - 1);
        Qsort(data, pivot + 1, high);
    }
}

int Solution::Partition(vector<int> &data, int low, int high, int pivot) {
    while (low < high) {
        while (low < high && data[high] >= pivot) {
            high--;
        }
        swap(&data[low], &data[high]);

        while (low < high && data[low] < pivot) {
            low++;
        }
        swap(&data[low], &data[high]);
    }
    return low;
}

void Solution::swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

stack<int> Solution::DeleteDuplicationNum(vector<int> data) {
    stack<int> stack1;
    int length = data.size();
//    int pre = NULL;         // todo 用NULL不行，可是我想设置一个pre等于一个data中不可能出现的元素，怎么做？
    int pre = 0x80000000;
    for (int i = 0; i < length; i++) {
        if (stack1.empty() && pre != data[i]) {
            stack1.push(data[i]);
        } else {
            int top = stack1.top();
            if (data[i] == top) {
                stack1.pop();
                pre = top;
            } else if (pre != data[i]) {
                stack1.push(data[i]);
            }
        }
    }
    return stack1;
}

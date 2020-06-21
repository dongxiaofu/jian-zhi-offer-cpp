//
// Created by chugang on 2020/6/21.
//
/*
 * leetcode判定这个方法超出时间限制
 */
#include "Solution.h"

void Solution::Insert(double num) {
    int total = counter + 1;
    counter++;
    if ((total & 1) == 1) {
        if (max.size() > 0 && num < max[0]) {
            int temp = max[0];
            max[0] = num;
            num = temp;
            make_heap(max.begin(), max.end(), less<double>());
        }
        min.push_back(num);
        make_heap(min.begin(), min.end(), greater<double>());
    } else {
        if (min.size() > 0 && num > min[0]) {
            int temp = num;
            num = min[0];
            min[0] = temp;
            make_heap(min.begin(), min.end(), greater<double>());
        }
        max.push_back(num);
        make_heap(max.begin(), max.end(), less<double>());
    }
}

double Solution::GetMedian() {
    if (counter == 0) {
        return 0;
    }
    double median;
    if ((counter & 1) == 1) {
        median = min[0];
    } else {
        median = (min[0] + max[0]) / 2;
    }
    return median;
}

//
// Created by chugang on 2020/6/27.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    vector<int> nums({1, 30, 2, 5});
    string numStr1 = solution.minNumber(nums);
    cout << numStr1 << endl;    // 12305

    vector<int> nums2({3, 30, 34, 5, 9});
    string numStr2 = solution.minNumber(nums2);
    cout << numStr2 << endl;    // 3033459

    return 0;
}

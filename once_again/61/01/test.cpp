//
// Created by chugang on 2020/6/26.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    vector<int> nums1({0, 0, 1, 4, 5});
    bool res1 = solution.isStraight(nums1);
    cout << res1 << endl;

    vector<int> nums2({11, 0, 9, 0, 0});
    bool res2 = solution.isStraight(nums2);
    cout << res2 << endl;

    return 0;
}

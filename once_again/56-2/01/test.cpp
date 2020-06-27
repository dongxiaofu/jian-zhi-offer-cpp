//
// Created by chugang on 2020/6/27.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    vector<int> nums1({9, 2, 2, 2, 4, 5, 4, 5, 4, 5});
    int result = solution.singleNumber(nums1);
    cout << result << endl;
    return 0;
}

//
// Created by chugang on 2020/7/4.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    vector<int> nums({1, 3, 2, 2, 5, 2,2});
    int ans = solution.majorityElement(nums);
    cout << ans << endl;        // 2

    return 0;
}

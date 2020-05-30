//
// Created by chugang on 2020/5/30.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    int arr1[6] = {4, 2, 1, 4, 2, 4};
    vector<int> arr;
    arr.insert(arr.begin(), arr1, arr1 + 6);
    int target = solution.moreThanHalfNum(arr);
    cout << target << endl;

    return 0;
}

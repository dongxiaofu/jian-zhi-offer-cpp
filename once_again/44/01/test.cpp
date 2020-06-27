//
// Created by chugang on 2020/6/27.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    int res1 = solution.findNthDigit(9);
    cout << res1 << endl;   // 8

    int res2 = solution.findNthDigit(12);
    cout << res2 << endl;   // 1

    int res3 = solution.findNthDigit(1000000000);
    cout << res3 << endl;   // 1



    return 0;
}

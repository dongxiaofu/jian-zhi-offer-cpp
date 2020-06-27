//
// Created by chugang on 2020/6/27.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    int n1 = solution.movingCount(2, 3, 0);
    cout << n1 << endl; // 1

    int n2 = solution.movingCount(2, 3, 1);
    cout << n2 << endl; // 3

    int n3 = solution.movingCount(1, 2, 1);
    cout << n3 << endl; // 2

    return 0;
}

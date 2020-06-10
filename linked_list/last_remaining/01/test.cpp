//
// Created by chugang on 2020/6/9.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

//    int n1 = solution.GetLastRemaining(1, 1);
//    cout << n1 << endl;

    int n5 = solution.GetLastRemaining(5, 3);
    cout << n5 << endl;

    int n8 = solution.GetLastRemaining(8, 3);
    cout << n8 << endl;

    return 0;
}

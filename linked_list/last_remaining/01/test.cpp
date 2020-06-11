//
// Created by chugang on 2020/6/9.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

//    int n1 = solution.GetLastRemaining(1, 1);
//    cout << n1 << endl;

    int n0 = solution.GetLastRemaining(0, 3);
    cout << n0 << endl;

    int n1 = solution.GetLastRemaining(1, 3);
    cout << n1 << endl;

    int n2 = solution.GetLastRemaining(2, 3);
    cout << n2 << endl;

    int n3 = solution.GetLastRemaining(3, 3);
    cout << n3 << endl;

    int n4 = solution.GetLastRemaining(4, 3);
    cout << n4 << endl;

    int n5 = solution.GetLastRemaining(5, 3);
    cout << n5 << endl;

    return 0;
}

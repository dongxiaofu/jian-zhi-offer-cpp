//
// Created by chugang on 2020/6/10.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    int mod = -7 % 3;
    cout << mod << endl;

//    int n1 = solution.GetLastRemaining(1, 1);
//    cout << n1 << endl;

    int n0 = solution.GetLastRemaining(0, 3);
    cout << n0 << endl;

    int n1 = solution.GetLastRemaining(1, 3);
    cout << n1 << endl;

    int n2 = solution.GetLastRemaining(2, 3);
    cout << n2 << endl;

    int n5 = solution.GetLastRemaining(3, 3);
    cout << n5 << endl;

//    int n8 = solution.GetLastRemaining(8, 3);
//    cout << n8 << endl;

    return 0;
}

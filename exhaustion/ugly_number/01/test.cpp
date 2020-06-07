//
// Created by chugang on 2020/6/7.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    int number1 = solution.GetUglyNumber(1);
    cout << number1 << endl;        // 1

    int number2 = solution.GetUglyNumber(2);
    cout << number2 << endl;    // 2

    int number3 = solution.GetUglyNumber(3);
    cout << number3 << endl;    // 3

    return 0;
}

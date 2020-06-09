//
// Created by chugang on 2020/6/9.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    int number0 = solution.GetUglyNumber(0);
    cout << number0 << endl;

    int number1 = solution.GetUglyNumber(1);
    cout << number1 << endl;        // 1

    int number2 = solution.GetUglyNumber(2);
    cout << number2 << endl;    // 2

    int number3 = solution.GetUglyNumber(3);
    cout << number3 << endl;    // 3

    int number4 = solution.GetUglyNumber(4);
    cout << number4 << endl;

    int number5 = solution.GetUglyNumber(5);
    cout << number5 << endl;

    int number6 = solution.GetUglyNumber(6);
    cout << number6 << endl;

    int number1500 = solution.GetUglyNumber(1500);
    cout << number1500 << endl;    //

    return 0;
}

//
// Created by chugang on 2020/6/28.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    int total1 = solution.countDigitOne(12);
    cout << total1 << endl;

    int total2 = solution.countDigitOne(824883294);
    cout << total2 << endl;

    return 0;
}

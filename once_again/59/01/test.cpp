//
// Created by chugang on 2020/6/28.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    int top = solution.pop_front();
    int max = solution.max_value();
    cout << top << "," << max << endl;

    solution.push_back(2);
    solution.push_back(1);
    solution.push_back(-3);
    int max2 = solution.max_value();
    int top2 = solution.pop_front();
    cout << max2 << "," << top2 << endl;

    int max3 = solution.max_value();
    cout << max3 << "," << endl;

    return 0;
}

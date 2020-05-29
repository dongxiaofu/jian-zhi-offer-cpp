//
// Created by chugang on 2020/5/29.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    solution.push(1);
    cout << solution.min() << endl;     // 1

    solution.push(2);
    cout << solution.min() << endl;     // 1

    solution.push(-3);
    cout << solution.min() << endl;     // -3

    solution.pop();
    cout << solution.min() << endl;     // 1

    solution.pop();
    cout << solution.min() << endl;     // 1

    return 0;
}

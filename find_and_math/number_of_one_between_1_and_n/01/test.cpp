//
// Created by chugang on 2020/5/30.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    int counter1 = solution.NumberOf1Between1AndN(11);
    cout << counter1 << endl;

    int counter2 = solution.NumberOf1Between1AndN(13);
    cout << counter2 << endl;

    return 0;
}

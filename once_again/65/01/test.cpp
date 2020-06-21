//
// Created by chugang on 2020/6/21.
//
#include <iostream>
#include "Solution.h"

int main() {
    using namespace std;
    Solution solution;
    int sum1 = solution.add(1, 2);
    cout << sum1 << endl;

    int sum2 = solution.add(28, 87);
    cout << sum2 << endl;

    int sum3 = solution.add(-1, 2);
    cout << sum3 << endl;

    return 0;
}

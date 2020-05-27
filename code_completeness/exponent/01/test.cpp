//
// Created by chugang on 2020/5/27.
//

#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    double n1 = solution.Power(2, 1);
    cout << n1 << endl;

    double n2 = solution.Power(2, 2);
    cout << n2 << endl;

    double n3 = solution.Power(2, 3);
    cout << n3 << endl;

    double n4 = solution.Power(2, -2);
    cout << n4 << endl;

    return 0;
}
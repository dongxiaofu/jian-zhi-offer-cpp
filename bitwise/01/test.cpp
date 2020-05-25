//
// Created by chugang on 2020/5/25.
//

#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    int n = 8;
    int counter = solution.NumberOf1(n);
    cout << n << "======" << counter << endl;

    int n2 = -2;
    int counter2 = solution.NumberOf1(n2);
    cout << n2 << "======" << counter2 << endl;

    int n3 = 2;
    int counter3 = solution.NumberOf1(n3);
    cout << n3 << "======" << counter3 << endl;

    int n4 = -1;
    int counter4 = solution.NumberOf1(n4);
    cout << n4 << "======" << counter4 << endl;

    int n5 = 0;
    int counter5 = solution.NumberOf1(n5);
    cout << n5 << "======" << counter5 << endl;
    return 0;
}
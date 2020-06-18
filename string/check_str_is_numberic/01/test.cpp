//
// Created by chugang on 2020/5/23.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    char string1[] = "3e+4";
    bool res = solution.isNumberic(string1);
    cout << res << endl;
    char string2[] = "12e+4.3";
    bool res2 = solution.isNumberic(string2);
    cout << res2 << endl;
    char string3[] = ".e1";
    bool res3 = solution.isNumberic(string3);
    cout << res3 << endl;
    float b = .3;
    cout << b << endl;
    float a = 3.;
    cout << a << endl;
    return 0;
}
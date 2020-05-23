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
    return 0;
}
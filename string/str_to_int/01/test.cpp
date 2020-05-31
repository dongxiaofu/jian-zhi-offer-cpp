//
// Created by chugang on 2020/5/31.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    int a = -2147483649;
    // 输出结果为 2147483647
    // warning: implicit conversion from 'long' to 'int' changes value from -2147483649 to 2147483647
    cout << a << endl;

    long b = -2147483649;
    // 输出结果为 2147483647
    cout << b << endl;

    long res1 = solution.StrToInT("");
    cout << res1 << endl;

    long res2 = solution.StrToInT("-23");
    cout << res2 << endl;

    long res3 = solution.StrToInT("23");
    cout << res3 << endl;

    long res4 = solution.StrToInT("2w3");
    cout << res4 << endl;

    long res5 = solution.StrToInT("-2147483649");
    cout << res5 << endl;

    return 0;
}
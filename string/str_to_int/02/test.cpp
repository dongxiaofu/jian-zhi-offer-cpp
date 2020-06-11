//
// Created by chugang on 2020/6/11.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

//    int a = -2147483649;
//    // 输出结果为 2147483647
//    // warning: implicit conversion from 'long' to 'int' changes value from -2147483649 to 2147483647
//    cout << a << endl;
//
//    long b = -2147483649;
//    // 输出结果为 2147483647
//    cout << b << endl;
//
//    long res1 = solution.t_atoi("");
//    cout << res1 << endl;

    long res2 = solution.t_atoi("-23");
    cout << res2 << endl;

    long res3 = solution.t_atoi("23");
    cout << res3 << endl;

//    long res4 = solution.t_atoi("2w3");
//    cout << res4 << endl;
//
    long res5 = solution.t_atoi("-214748364999");
    cout << res5 << endl;

    return 0;
}

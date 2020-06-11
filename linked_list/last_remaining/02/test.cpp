//
// Created by chugang on 2020/6/10.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

//    int mod = -7 % 3;
//    cout << mod << endl;

//    int n1 = solution.GetLastRemaining(1, 1);
//    cout << n1 << endl;

    int n0 = solution.GetLastRemaining(0, 3);
    cout << n0 << endl;

    int n1 = solution.GetLastRemaining(1, 3);
    cout << n1 << endl;

    int n2 = solution.GetLastRemaining(2, 3);
    cout << n2 << endl;

    int n3 = solution.GetLastRemaining(3, 3);
    cout << n3 << endl;

    int n4 = solution.GetLastRemaining(4, 3);
    cout << n4 << endl;

    int n5 = solution.GetLastRemaining(5, 3);
    cout << n5 << endl;

    // 上面的输出结果是：1 2 2 1 4
    // 不是说可以多次输出1或2，而是，上面的每次输出都是一个独立的结果。

    return 0;
}

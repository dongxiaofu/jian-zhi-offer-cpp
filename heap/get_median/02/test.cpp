//
// Created by chugang on 2020/6/21.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    double a = 5;
    double b = a / 2;
    cout << b << endl;
    cout << a / 2 << endl;
    cout << endl;

//    [5,2,3,4,1,6,7,0,8]
    solution.Insert(5);
    cout << solution.GetMedian() << endl;

    solution.Insert(2);
    cout << solution.GetMedian() << endl;

    solution.Insert(3);
    cout << solution.GetMedian() << endl;

    solution.Insert(4);
    cout << solution.GetMedian() << endl;

    solution.Insert(1);
    cout << solution.GetMedian() << endl;

    solution.Insert(6);
    cout << solution.GetMedian() << endl;

    solution.Insert(7);
    cout << solution.GetMedian() << endl;

    solution.Insert(0);
    cout << solution.GetMedian() << endl;

    solution.Insert(8);
    cout << solution.GetMedian() << endl;

    return 0;
}

//
// Created by chugang on 2020/5/23.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    solution.Insert('g');
    char c1 = solution.FirstAppearingOnce();
    cout << c1;
    solution.Insert('o');
    char c2 = solution.FirstAppearingOnce();
    cout << c2;
    solution.Insert('o');
    char c3 = solution.FirstAppearingOnce();
    cout << c3;
    solution.Insert('g');
    char c4 = solution.FirstAppearingOnce();
    cout << c4;
    solution.Insert('l');
    char c5 = solution.FirstAppearingOnce();
    cout << c5;
    solution.Insert('e');
    char c6 = solution.FirstAppearingOnce();
    cout << c6;
    return 0;
}
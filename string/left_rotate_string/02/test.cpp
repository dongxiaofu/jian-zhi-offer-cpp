//
// Created by chugang on 2020/5/31.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    string string1 = "a";
    cout << string1.length() << endl;

    string res = solution.LeftRotateString("arehow", 3);
    cout << res << endl;

    string res2 = solution.LeftRotateString("abcXYZdef", 3);
    cout << res2 << endl;

    return 0;
}


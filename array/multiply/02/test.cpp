//
// Created by chugang on 2020/6/19.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    vector<int> A({1, 2, 3, 4, 5});
    vector<int> B = solution.multiply(A);
    for (int i = 0; i < B.size(); i++) {
        cout << B[i] << ",";
    }
    cout << endl;

    return 0;
}

//
// Created by chugang on 2020/6/1.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    int tmp[3] = {1, 2, 3};
    vector<int> A(tmp, tmp + 3);
    vector<int> B = solution.multiply(A);
    for (int i = 0; i < B.size(); i++) {
        cout << B[i] << ",";
    }
    cout << endl;

    return 0;
}

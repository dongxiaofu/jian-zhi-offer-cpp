//
// Created by chugang on 2020/5/30.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    int tmp[4] = {4, 9, 10, 2};
    vector<int> input;
    input.insert(input.begin(), tmp, tmp + 4);
    vector<int> minValues = solution.getLeastNumbers(input, 2);
    for (int i = 0; i < 2; i++) {
        cout << minValues[i] << ",";
    }
    cout << endl;
    return 0;
}
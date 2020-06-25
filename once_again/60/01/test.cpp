//
// Created by chugang on 2020/6/25.
//
#include <iostream>
#include "Solution.h"

void print_vector(vector<double> ratios);

int main() {
    Solution solution;
    vector<double> ratios = solution.twoSum(1);
    print_vector(ratios);
    cout << "\n=============================\n";
    vector<double> ratios2 = solution.twoSum(2);
    print_vector(ratios2);

    return 0;
}

void print_vector(vector<double> ratios) {
    for (auto ratio:ratios) {
        cout << ratio << endl;
    }
}

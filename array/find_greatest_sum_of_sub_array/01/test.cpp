//
// Created by chugang on 2020/5/30.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    int tmp[5] = {-2, -8, -1, -5, -9};
    vector<int> array;
    array.insert(array.begin(), tmp, tmp + 5);
    int max_sum = solution.FindGreatestSumOfSubArray(array);
    cout << max_sum << endl;
    return 0;
}

//
// Created by chugang on 2020/5/31.
//

#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    int tmp[5] = {1, 3, 5, 5, 7};
    vector<int> array;
    array.insert(array.begin(), tmp, tmp + 5);
    int counter = solution.GetNumberOfK(array, 5);
    cout << counter << endl;

    return 0;
}
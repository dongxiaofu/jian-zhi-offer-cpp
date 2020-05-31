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

    int tmp2[8] = {1, 2, 3, 3, 3, 3, 4, 5};
    vector<int> array2;
    array2.insert(array2.begin(), tmp2, tmp2 + 8);
    int counter2 = solution.GetNumberOfK(array2, 3);
    cout << counter2 << endl;

    return 0;
}

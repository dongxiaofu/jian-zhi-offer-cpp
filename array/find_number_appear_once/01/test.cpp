//
// Created by chugang on 2020/5/31.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    int tmp[4] = {1, 2, 2, 3};
    vector<int> array;
    array.insert(array.begin(), tmp, tmp + 4);
//    int *num1, *num2;
    int num1, num2;
    solution.FindNumsAppearOnce(array, &num1, &num2);
    cout << num1 << "," << num2 << endl;

    return 0;
}

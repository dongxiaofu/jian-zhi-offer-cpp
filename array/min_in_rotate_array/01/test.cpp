//
// Created by chugang on 2020/5/27.
//

#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    std::vector<int> array1 = {1, 1, 1, 2, 3, 4, 5};
    int min1 = solution.minNumberInRotateArray(array1);
    cout << min1 << endl;

    std::vector<int> array2 = {5, 6, 7, 8};
    int min2 = solution.minNumberInRotateArray(array2);
    cout << min2 << endl;

    return 0;
}

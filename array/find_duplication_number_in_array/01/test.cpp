//
// Created by chugang on 2020/5/26.
//

#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    int numbers[5] = {1, 3, 3, 5, 9};
    int duplication;
    solution.duplicate(numbers, 5, &duplication);
    cout << duplication << endl;
    return 0;
}


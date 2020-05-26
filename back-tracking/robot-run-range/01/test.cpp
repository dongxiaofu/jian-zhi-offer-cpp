//
// Created by chugang on 2020/5/26.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    int counter = solution.movingCount(5, 3, 4);
    cout << counter << endl;
//    int counter1 = solution.movingCount(0, 3, 4);
//    cout << counter1 << endl;
//    int counter2 = solution.movingCount(5, 0, 4);
//    cout << counter2 << endl;
    return 0;
}

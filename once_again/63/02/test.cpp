//
// Created by chugang on 2020/6/27.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    vector<int> price1({4, 5, 3, 9, 2});
    int max1 = solution.maxProfit(price1);
    cout << max1 << endl;   // 6

    vector<int> price2({4, 3, 3, 2, 1});
    int max2 = solution.maxProfit(price2);
    cout << max2 << endl;   // 0

    vector<int> price3({1, 2});
    int max3 = solution.maxProfit(price3);
    cout << max3 << endl;   // 1

    return 0;
}

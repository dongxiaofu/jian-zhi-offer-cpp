//
// Created by chugang on 2020/6/26.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
//    [
//    [1,3,1],
//    [1,5,1],
//    [4,2,1]
//    ]
    vector<int> gift1({1, 3, 1});
    vector<int> gift2({1, 5, 1});
    vector<int> gift3({4, 2, 1});
    vector<vector<int>> grid1;
    grid1.push_back(gift1);
    grid1.push_back(gift2);
    grid1.push_back(gift3);
    int maxValue = solution.maxValue(grid1);
    cout << maxValue << endl;
    return 0;
}

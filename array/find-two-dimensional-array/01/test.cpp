//
// Created by chugang on 2020/6/1.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    int tmp1[5] = {1, 2, 3, 4, 5};
    vector<int> array1(tmp1, tmp1 + 5);

    int tmp2[5] = {6, 7, 8, 9, 10};
    vector<int> array2(tmp2, tmp2 + 5);

    int tmp3[5] = {11, 12, 13, 14, 15};
    vector<int> array3(tmp3, tmp3 + 5);

    vector<vector<int>> array;
    array.push_back(array1);
    array.push_back(array2);
    array.push_back(array3);

    bool exist = solution.Find(13, array);
    cout << exist << endl;


    return 0;
}

//
// Created by chugang on 2020/5/26.
//

#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    vector<int> array1;
    array1.push_back(1);
    array1.push_back(2);
    array1.push_back(3);
    vector<int> array2;
    array1.push_back(9);
    array1.push_back(4);
    array1.push_back(5);

    vector<vector<int>> array;
    array.push_back(array1);
    array.push_back(array2);

    bool res = solution.Find(9, array);
    cout << res << endl;

    return 0;
}
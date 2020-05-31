//
// Created by chugang on 2020/5/31.
//
#include <iostream>
#include <typeinfo>
#include "Solution.h"

void PrintVector(vector<vector<int>> v);

int main() {
    Solution solution;

    vector<vector<int>> res = solution.FindContinuousSequence(100);
    PrintVector(res);

    vector<int> a;
    // todo 如何检测变量类型？
    printf("%s\n", typeid(a).name());//类型

    return 0;
}

void PrintVector(vector<vector<int>> v) {
    int size = v.size();
    for (int i = 0; i < size; i++) {
        vector<int> vv = v[i];
        for (int i = 0; i < vv.size(); i++) {
            cout << vv[i] << ",";
        }
        cout << endl;
    }
}

//
// Created by chugang on 2020/6/11.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
//    string str = "abc";
//    vector<string> strs = solution.Permutation(str);
//    for (int i = 0; i < strs.size(); i++) {
//        cout << strs[i] << endl;
//    }

    string str2 = "kzfxxx";
    vector<string> strs2 = solution.Permutation(str2);
    for (int i = 0; i < strs2.size(); i++) {
        cout << strs2[i] << endl;
    }


    return 0;
}

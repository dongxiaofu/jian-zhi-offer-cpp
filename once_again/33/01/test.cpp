//
// Created by chugang on 2020/6/21.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    vector<int> postorder1({1, 3, 2, 6, 5});
    bool res1 = solution.verifyPostorder(postorder1);
    cout << res1 << endl;

    vector<int> postorder2({1, 7, 2, 6, 5});
    bool res2 = solution.verifyPostorder(postorder2);
    cout << res2 << endl;

    return 0;
}

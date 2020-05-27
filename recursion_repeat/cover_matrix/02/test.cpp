//
// Created by chugang on 2020/5/27.
//

#include <iostream>
#include "Solution.h"

using namespace std;    // cout为何需要这句？

int main() {
    Solution solution;

    int num0 = solution.RectCover(0);
    cout << num0 << endl;

    int num1 = solution.RectCover(2);
    cout << num1 << endl;

    int num4 = solution.RectCover(4);
    cout << num4 << endl;

    int num5 = solution.RectCover(5);
    cout << num5 << endl;

    return 0;
}

//
// Created by chugang on 2020/5/29.
//

#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    int arr11[] = {1, 2, 3, 4, 5};
    vector<int> pushV;
    pushV.insert(pushV.begin(), arr11, arr11 + 5);
    int arr12[] = {3, 5, 4, 2, 1};
    vector<int> popV;
    popV.insert(popV.begin(), arr12, arr12 + 5);
    bool is = solution.isPopOrder(pushV, popV);
    cout << is << endl;

    cout << endl << "========================" << endl;

    int arr21[] = {1, 2, 3, 4, 5};
    vector<int> pushV21;
    pushV21.insert(pushV21.begin(), arr21, arr21 + 5);
    int arr22[] = {5, 4, 3, 2, 1};
    vector<int> popV22;
    popV22.insert(popV22.begin(), arr22, arr22 + 5);
    bool is21 = solution.isPopOrder(pushV21, popV22);
    cout << is21 << endl;

    cout << endl << "========================" << endl;
    int arr31[] = {1, 2, 3, 4, 5};
    vector<int> pushV31;
    pushV31.insert(pushV31.begin(), arr31, arr31 + 5);
    int arr32[] = {4, 5, 3, 2, 1};
    vector<int> popV32;
    popV32.insert(popV32.begin(), arr32, arr32 + 5);
    bool is31 = solution.isPopOrder(pushV31, popV32);
    cout << is31 << endl;

    return 0;
}
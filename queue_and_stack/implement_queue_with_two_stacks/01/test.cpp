//
// Created by chugang on 2020/5/28.
//

#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

//    solution.push(1);
//    solution.push(2);
//    int top = solution.pop();
//    cout << top << endl;
    for (int i = 0; i < 10; i++) {
        cout << "*";
    }
    cout << endl;

    solution.push(1);
    solution.push(2);
    solution.push(3);
    cout << solution.pop() << ",";
    cout << solution.pop() << ",";
    solution.push(4);
    cout << solution.pop() << ",";
    solution.push(5);
    cout << solution.pop() << ",";
    cout << solution.pop() << "," << endl;

    return 0;
}

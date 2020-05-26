//
// Created by chugang on 2020/5/26.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    char matrix2[] = "ABCESFCSADEE";
    char str2[] = "ABCCED";
    int rows2 = 3, cols2 = 4;
    bool hasPath2 = solution.hasPath(matrix2, cols2, rows2, str2);
    cout << hasPath2 << endl;

    char matrix[] = "ABCESFCSADEE";
    char str[] = "SEE";
    int rows = 3, cols = 4;
    bool hasPath = solution.hasPath(matrix, cols, rows, str);
    cout << hasPath << endl;
    return 0;
}
//
// Created by chugang on 2020/5/27.
//

#include "Solution.h"

int Solution::Fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n <= 2) {
        return 1;
    }
    int f1 = 1;
    int f2 = 1;
    int f3 = 2;
    int start = 3;
    while (start <= n) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        start++;
    }
    return f3;
}

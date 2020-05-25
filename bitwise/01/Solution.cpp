//
// Created by chugang on 2020/5/25.
//

#include "Solution.h"

int Solution::NumberOf1(int n) {
    int flag = 1;
    int counter = 0;
//    while (flag > 0) {
    while (flag != 0) {     // 必须如此
        if ((flag & n) != 0) {
            counter++;
        }
        flag = flag << 1;
    }

    return counter;
}

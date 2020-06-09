//
// Created by chugang on 2020/6/7.
//
/**************************************************
 * 丑数，时间复杂度O(N2)。
 * 思路一：
 * 1.将丑数序号index设置为1，从1开始遍历，检测每个数是不是
 * 丑数，每遇到一个丑数，将index加1，一直到index等于目标数
 * 字时停止遍历。
 * 2.检测是不是丑数的方法：
 * 2.1.不能被2、3、5整除的数，就是丑数
 * 测试：index=1500时，运行很久才得出结果。02的算法，很快就
 * 得出了结果。
 **************************************************/
#include "Solution.h"

int Solution::GetUglyNumber(int index) {
    int counter = 1;
    int number = 0;
    while (counter <= index) {
        number++;
        if (isUglyNumber(number)) {
            counter++;
        }
    }

    return number;
}

bool Solution::isUglyNumber(int number) {
    while (number % 2 == 0) {
        number /= 2;
    }
    while (number % 3 == 0) {
        number /= 3;
    }
    while (number % 5 == 0) {
        number /= 5;
    }

    return (number == 1) ? true : false;
}

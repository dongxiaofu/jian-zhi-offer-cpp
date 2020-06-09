//
// Created by chugang on 2020/6/9.
//
/********************************************************
 * 丑数，优化解法，时间复杂度O(?)。不会分析。
 * 思路：
 * 1.将所有丑数递增存储在数组中，每个丑数都是它前面某个丑数乘以2或3
 * 或5得到的。
 * 2.设乘以2得到的数是M2，乘以3得到的数是M3，乘以5得到的数是M5，目
 * 前最后面的丑数是M（也是目前最大的丑数）。
 * 3.新丑数，是大于M的数字（M2、M3、M5）中的最小数。
 * 为什么M2、M3、M5大于M呢？因为这是我刻意计算的结果。我会依次将M前
 * 面的数字乘以2，直到得到一个大于M的数字，即M2；M3、M5按照同样的方
 * 法获取。
 * 4.获得最新的M后，将其存储到数组中，一直到数组元素个数达到目标值。
 * 注意：
 * 心算能力很差。我觉得，在比较紧张、又不能通过运行调试的情况下，我
 * 难以修正bug。
 * 用笔算模拟代码执行，又嫌麻烦。
 ********************************************************/
#include "Solution.h"

int Solution::GetUglyNumber(int index) {
    if (index <= 0) {
        return 0;
    }

    int uglyNumbers[index];
//    for (int i = 0; i < index; i++) {
//        uglyNumbers[i] = 0;
//    }
    memset(uglyNumbers, 0, sizeof(int) * index);
    uglyNumbers[0] = 1;
    int nextUglyNumberIndex = 1;
    int multiplyIndex2 = 0, multiplyIndex3 = 0, multiplyIndex5 = 0;
    // todo 为什么不能等于index？int arr = new int[5]，arr的最后一个元素是arr[4]。
    while (nextUglyNumberIndex < index) {
        int min = Min(uglyNumbers[multiplyIndex2] * 2, uglyNumbers[multiplyIndex3] * 3,
                      uglyNumbers[multiplyIndex5] * 5);
        uglyNumbers[nextUglyNumberIndex] = min;

        // todo multiplyIndex2一定不会大于nextUglyNumberIndex，最多等于。uglyNumbers是正数数组。
        // todo uglyNumbers[nextUglyNumberIndex] * 2 大于 uglyNumbers[nextUglyNumberIndex]，这是确定无疑的。
        while (uglyNumbers[multiplyIndex2] * 2 <= uglyNumbers[nextUglyNumberIndex]) {
            multiplyIndex2++;
        }

        while (uglyNumbers[multiplyIndex3] * 3 <= uglyNumbers[nextUglyNumberIndex]) {
            multiplyIndex3++;
        }

        while (uglyNumbers[multiplyIndex5] * 5 <= uglyNumbers[nextUglyNumberIndex]) {
            multiplyIndex5++;
        }
        nextUglyNumberIndex++;
    }
    // todo 当 nextUglyNumberIndex == index 时，已经不满足条件，最后一个元素是index-1
    int target = uglyNumbers[nextUglyNumberIndex - 1];
    return target;
}

int Solution::Min(int number1, int number2, int number3) {
    int min = (number1 > number2) ? number2 : number1;
    min = (min < number3) ? min : number3;
    return min;
}

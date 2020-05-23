//
// Created by chugang on 2020/5/23.
//

#include "Solution.h"
/******************************************************
 * 我用Java写这道题时，根本不需要考虑这么多。
******************************************************/
void Solution::replaceSpace(char *str, int length) {
    // 若字符串为空，或提供的内存为0，无法完成功能
    if (str == NULL || length == 0) {
        return;
    }
    // 统计字符串长度和空格数量
    int originalLength = 0;
    int numberOfBlank = 0;
    int i = 0;
    while (str[i] != '\0') {
        originalLength++;
        if (str[i] == 32) {
            numberOfBlank++;
        }
        i++;
    }
    /******************************************************
     * 一个空格的长度是1，而"%20"的长度是3，所以，替换后的字符串的长
     * 度大numberOfBlank*2。也可以先将原字符串长度减去空格个数，再
     * 加上numberOfBlank*3。
     ******************************************************/
    int newLength = originalLength + numberOfBlank * 2;
    // 若提供的内存不够，无法完成功能
    if (newLength > length) {
        return;
    }
    /*******************************************************
     * 这里没有问题。
     * originalLength是str的实际长度-1。
     * 所以，str[indexOfOriginal]合法，没有越界，并且是'\0'。
     *******************************************************/
    int indexOfOriginal = originalLength;
    int indexOfNew = newLength;
    /*******************************************************
     * 全部复制完毕，就终止复制。
     * 当最后一个空格被复制完，两个索引相等。
     *******************************************************/
    while (indexOfOriginal >= 0 && indexOfOriginal <= indexOfNew) {
        if (str[indexOfOriginal] == 32) {
            // 从后往前复制，对"%20"，复制顺序是：0,2,%
            str[indexOfNew--] = '0';
            str[indexOfNew--] = '2';
            str[indexOfNew--] = '%';
        } else {
            str[indexOfNew--] = str[indexOfOriginal];
        }
        // 因为两种情况都需要递减indexOfOriginal，所以把这句放到最外面
        indexOfOriginal--;
    }
}

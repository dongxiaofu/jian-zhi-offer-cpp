//
// Created by chugang on 2020/5/26.
//

#include "Solution.h"
/*********************************************
 * 时间复杂度为O(n)的解法。
 * 与 find_first_appearing_once 很相似，todo
 * 找出二者的区别。
 *********************************************/
int Solution::FirstNotRepeatingChar(string str) {
    // 数组初始化，全部元素为\0
    char hash[128] = {};
    int length = str.size();
    // php中有关联数组，c++中需要自己实现关联数组，有局限的，比如，不能有arr['index']=5
    for (int i = 0; i < length; i++) {
        char ch = str[i];
        if (hash[ch] == 0) {
            hash[ch] = 1;
        } else {
            hash[ch] += 1;
        }
    }
    int index = -1;
    for (int i = 0; i < length; i++) {
        if (hash[str[i]] == 1) {
            index = i;
            break;
        }
    }
    return index;
}

//
// Created by chugang on 2020/5/27.
//

#include "Solution.h"
/************************************************
 * 时间复杂度，仍然是O(n)，仍然使用了交换空间，并不比01
 * 解法高明。
 * todo 注意，这里犯了一个非常愚蠢的错误。
 ************************************************/
void Solution::reOrderArray(vector<int> &array) {
    int size = array.size();
    int *new_arr = new int[size];
//    int new_arr[6];
    int start = 0;
    int end = size - 1;
    for (int i = 0; i < size; i++) {
        // 这个代码，达不到预期目的：将奇数放到new_arr的前面，将偶数放到new_array的后面
        // 它，只是原样复制了代码。
        // 可恶的错误！又浪费了不少时间。
//        if ((array[i] & 0x1) == 1) {
//            int item = array[i];
//            new_arr[i] = array[i];
//        }
//        if ((array[size - 1 - i] & 0x1) == 0) {
//            int item = array[size - 1 - i];
//            new_arr[size - 1 - i] = array[size - 1 - i];
//        }
        // new_arr使用start和end，而不是与if相同的索引
        if ((array[i] & 0x1) == 1) {
            new_arr[start++] = array[i];
        }

        if ((array[size - 1 - i] & 0x1) == 0) {
            new_arr[end--] = array[size - 1 - i];
        }
    }
    for (int i = 0; i < size; i++) {
        array[i] = new_arr[i];
    }
    delete[] new_arr;
}
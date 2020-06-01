//
// Created by chugang on 2020/6/1.
//
/**********************************************************
 * 二维数组中的查找，时间复杂度O(?)。是O(N)吗？
 * 思路：
 * 1.使用"二分法"。
 * 2.数组arr[i][j]，中间数字arr[i/2][j/2]。
 * 2.1.target 与 arr[i/2][j/2] 比较
 * 2.1.1.若大于，X方向，往-->移动，Y方向，需要移动吗？
 * todo 这个思路，不合理，很麻烦，正确性未知
 * 学习到的思路：
 * 1.选取右上角的数字N。
 * 2.如果target大于N，排除N所在的那行数据。
 * 3.如果target小于N，排序N所在的那列数据。
 * 4.循环1--3步，循环进行的条件是当前X大于等于0 && Y 小于等于列数。
 * 5.循环终止条件，不满足第4步中的条件，或者找到了等于N的数据。
 **********************************************************/
#include "Solution.h"

bool Solution::Find(int target, vector<vector<int> > array) {
    int rows = array.size();
    if (rows == 0) {
        return false;
    }
    int columns = array[0].size();
    if (columns == 0) {
        return false;
    }

    int row = 0;
    int column = columns - 1;

    while (row <= rows-1 && column >= 0) {
        if (array[row][column] == target) {
            return true;
        } else if (array[row][column] < target) {       // todo 这个条件，我容易弄错
            row++;
        } else {
            column--;
        }
    }

    return false;
}
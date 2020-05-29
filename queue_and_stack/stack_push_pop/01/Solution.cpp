//
// Created by chugang on 2020/5/29.
//
/******************************************
 * 栈的压入、弹出序列
 * 时间复杂度O(N)。
 * 若不能使用额外空间，代码会写得复杂些，很容易出错。
 * 没有IDE调试，我很难改正确。
 * 犯过的错误：
 * 1.入栈：1,2,3,4,5；出栈：5,4,3,2,1。
 * 2.入栈：1,2,3,4,5;出栈：4,5,3,2,1。（遗漏）
 * 3.入栈：1,2,3,4,5;出栈：3,5,4,2,1。（遗漏）
 * 思路：
 * 1.每个入栈的元素，可能马上出栈，也可能不出栈。
 * 2.如果马上出栈，入栈序列和出栈序列都指向下一个
 * 元素。（马上出栈<==>出栈序列的当前元素=入栈序列
 * 的当前元素）。
 * 3.如果没有马上出栈，就把它存储到A，入栈序列
 * 指向下一个元素。
 * 4.当入栈序列遍历结束后(入栈序列一定比出栈序列先
 * 遍历结束），A的元素与出栈序列的剩余元素组成的倒序
 * 列元素一一对应。
 * 5.不满足4，出栈序列不是入栈序列的出栈情况。
 ******************************************/
#include "Solution.h"

bool Solution::isPopOrder(vector<int> pushV, vector<int> popV) {
    int size = pushV.size();
    if (size == 0) {
        return false;
    }
    int i = 0, j = 0;
    vector<int> other;
    while (i < size && j < size) {
        if (pushV[i] == popV[j]) {
            i++;
            j++;
        } else {
            // todo 两句的顺序不能颠倒
            other.push_back(pushV[i]);
            i++;
        }
    }
    // todo 出栈序列剩余数量与未马上出栈的数量相等
    // todo 细节问题，举例去验证。出栈索引到了i，那么剩余元素个数是size - i。
    int other_size = other.size();
    if (size - j != other_size) {
        return false;
    }
    int other_index = other_size - 1;
    for (int k = j; k < size; k++) {
        if (popV[k] != other[other_index--]) {
            return false;
        }
    }
    return true;
}

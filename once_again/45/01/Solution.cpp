//
// Created by chugang on 2020/6/27.
//
/****************************************************
 * 把数组排成最小的数
 * 输入一个非负整数数组，把数组里所有数字拼接起来排成一个数，打
 * 印能拼接出的所有数字中最小的一个。
 * 思路：
 * 1.关键在对sort的使用
 * 1.1.自定义compare，比较大小的规则，不是数字大小，而是比较字符
 * 串的大小。
 * 1.2.数字的字符串形式，大小比较结果，等同于数字本身的比较结果。
 * 2.todo 我不能透彻理解的地方：
 * 2.1.将最小的字符串放到前面了，就能确保整个字符串最小吗？
 * 2.1.1.解释：
 * 2.1.2.假设将最小字符串放到第一个位置得到的字符串是numStr1，
 * 将非最小字符串放到第一个位置的字符串是numStr2。
 * 2.1.3.numStr1和numStr2的位数相同，只需从左到右依次比较
 * 二者的最高位。
 * 2.1.4.最高位大的数，值必然大。
 * 这个解释，不严谨。详细的证明，我懒得去看了。
 * 《剑指offer》上的解法，语法难懂，因为用了很多指针。
 ****************************************************/
#include "Solution.h"

string Solution::minNumber(vector<int> &nums) {
    vector<string> strs;
    int len = nums.size();
    for (int i = 0; i < len; i++) {
        strs.push_back(to_string(nums[i]));
    }
    sort(strs.begin(), strs.end(), compare);
    string numStr = "";
    for (int i = 0; i < len; i++) {
        numStr += strs[i];
    }
    return numStr;
}

int Solution::compare(string &numStr1, string &numStr2) {
    return (numStr1 + numStr2 < numStr2 + numStr1);
}

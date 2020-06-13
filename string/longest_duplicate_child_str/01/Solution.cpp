//
// Created by chugang on 2020/6/13.
//
/****************************************************
 * 请从字符串中找出一个最长的不包含重复字符的子字符串，计算该最长子字符串的长度。
 * 思路：
 * 1.遍历字符串。从第一个字符开始，寻找不包含重复字符的子字符串。
 * 1.1.将每个出现过的字符存储到hash表中，字符是键，值是1（已经存在）或0（不存在）。
 * 1.2.从当前字符的下个字符开始第二个遍历，检查每个字符是不是在hash表中。
 * 1.2.1.存在，第一层遍历从下个字符开始。
 * 1.2.2.不存在，子字符串的长度加1，继续第二层遍历。
 ****************************************************/
#include "Solution.h"

int Solution::lengthOfLongestSubstring(string s) {
    int len = s.length();
    if (len == 0) {
        return 0;
    }
    int hash_table[128];
    int max = INT_MIN;
    for (int i = 0; i < len; i++) {
        memset(hash_table, 0, sizeof(hash_table));
        if (hash_table[s[i]] == 0) {
            hash_table[s[i]] = 1;
        }
        int couter = 1;
        for (int j = i + 1; j < len; j++) {
            if (hash_table[s[j]] == 1) {
                break;
            }
            hash_table[s[j]] = 1;
            couter++;
            if (max < couter) {
                max = couter;
            }
        }
    }

    return max;
}

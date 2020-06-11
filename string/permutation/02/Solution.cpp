//
// Created by chugang on 2020/6/11.
//
/**
 * 字符串全排列，时间复杂度O(?）
 * 不能完全理解去重代码
 */
#include "Solution.h"

vector<string> Solution::Permutation(string string1) {
    vector<string> strs;
    if (string1.empty()) {
        return strs;
    }
    PermutationCore(strs, string1, 0);
    return strs;
}

void Solution::PermutationCore(vector<string> &strs, string string1, int index) {
    if (string1[index] == '\0') {
        strs.push_back(string1);
        return;
    }
    for (int i = index; string1[i] != '\0'; i++) {
        char temp;
        if (Judge(string1, index, i)) {
            continue;
        }
        // todo 不理解为何需要使用上面的函数
        // todo 从index到i，之间若有字符与str[index]相同，就不必对str[i]和str[index]进行交换。这是为什么？
        // todo Judge与下面的代码的差别：前者比较index和i之间是否有字符与str[index]相同；后者只比较str[i]与
        // todo str[index]是否相同。我认为，前者能过滤更多种情况。
        // todo 我不理解前者的做法。
        // todo 这不是任何通用算法，费劲理解了，也没多少作用。
//        if (i != index && string1[i] == string1[index]) {
//            continue;
//        }

        temp = string1[i];
        string1[i] = string1[index];
        string1[index] = temp;

        PermutationCore(strs, string1, index + 1);

        temp = string1[i];
        string1[i] = string1[index];
        string1[index] = temp;
    }
}

bool Solution::Judge(string string1, int cursor, int end) {
    // todo 不能是i <= end。这会排除掉上层代码for (int i = index; string1[i] != '\0'; i++) 中 i=index的情况。
//    for (int i = cursor; i <= end; i++) {
    for (int i = cursor; i < end; i++) {
        if (string1[i] == string1[end]) {
            return true;
        }
    }
    return false;
}



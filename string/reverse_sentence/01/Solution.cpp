//
// Created by chugang on 2020/5/26.
//

#include "Solution.h"

string Solution::ReverseSentence(string str) {
    vector<string> words;
    int size = str.size();
    string word = "";
    // 当数组用的时候，数组元素比size大1。
    for (int i = 0; i <= size; i++) {
        if (str[i] == 32 || str[i] == '\0') {
            words.push_back(word);
            word = "";
            continue;
        }
        word += str[i];
    }
    string sentence = "";
    int num = words.size();
    for (int i = num - 1; i >= 0; i--) {
        sentence += words[i];
        if (i > 0) {
            sentence += " ";
        }
    }
    return sentence;
}
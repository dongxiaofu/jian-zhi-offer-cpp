//
// Created by chugang on 2020/5/23.
//

#include "Solution.h"
/******************************************************
 * 时间复杂度为O(n)。
 * 构造一个容量为256的简单hash表。key是字符，value表示
 * 字符出现的次数。0，未出现；-1，出现多次；大于0，出现一次，
 * 而且按出现的先后次序排序，值越小，表示出现越早。
 ******************************************************/
void Solution::Insert(char c) {
    if (hash[c] == 0) {
        hash[c] = index++;
    } else {
        hash[c] = -1;
    }
}

char Solution::FirstAppearingOnce() {
    char c = '#';
    // 表示hash中不可能出现的值
    int tmp = 65536;
    for (int i = 0; i < 256; i++) {
        // 仅出现一次，而且还需要是最早出现一次。google中，当插入l时，c是l，当插入e时，c仍是l。
        // 这就是hash[i] < tmp 起到的作用。
        if (hash[i] != 0 && hash[i] != -1 && hash[i] < tmp) {
            c = (char) i;
            tmp = hash[i];
        }
    }
    return c;
}

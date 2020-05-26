//
// Created by chugang on 2020/5/26.
//

#include "Solution.h"

bool Solution::duplicate(int *numbers, int length, int *duplication) {
    int *hash_table = new int[length];
    for (int i = 0; i < length; i++) {
        hash_table[i] = 0;
    }
    for (int i = 0; i < length; i++) {
        if (hash_table[numbers[i]] == 0) {
            hash_table[numbers[i]] = 1;
        } else {
            hash_table[numbers[i]] += 1;
        }
    }
    for (int i = 0; i < length; i++) {
        if (hash_table[numbers[i]] > 1) {
            *duplication = numbers[i];
            return true;
        }
    }
    return false;
}

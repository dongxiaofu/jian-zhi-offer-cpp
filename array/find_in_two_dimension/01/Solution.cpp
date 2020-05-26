//
// Created by chugang on 2020/5/26.
//

#include "Solution.h"

bool Solution::Find(int target, vector<vector<int> > array) {
    for (int i = 0; i < array.size(); i++) {
        vector<int> item = array[i];
        for (int j = 0; j < item.size(); j++) {
            if (target == item[j]) {
                return true;
            }
        }
    }
    return false;
}

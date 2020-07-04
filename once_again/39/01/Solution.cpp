//
// Created by chugang on 2020/7/4.
//
/******************
 * 数组中出现次数超过一半的数字
 * 哈希法
 ******************/
#include "Solution.h"

int Solution::majorityElement(vector<int> &nums) {
    unordered_map<int, int> mp;
    int ans;
    for (auto num:nums) {
        mp[num]++;
    }
    int count = nums.size();
    for (auto ptr:mp) {
        if (ptr.second > count / 2) {
            ans = ptr.first;
            break;
        }
    }
    return ans;
}

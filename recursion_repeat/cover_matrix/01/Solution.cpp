//
// Created by chugang on 2020/5/27.
//

#include "Solution.h"

int Solution::RectCover(int target) {
    // 遗漏了这种情况
    if (target <= 3) {
        return target;
    }
    return RectCover(target - 1) + RectCover(target - 2);
}
//
// Created by chugang on 2020/5/23.
//

#include "Solution.h"
/*******************************************************
 * 时间复杂度O(n)。
 * 初看，我没有思路。这是看懂别人的解法后写的代码。
 * 排除非法情况，剩余情况就是合法数值。
 * 1.e或E不能出现在末尾，不能重复出现。
 * 2.+或-若不是在开头，就必须紧随e或E出现。
 * 3.小数点不能重复出现，不能出现在e或E后面。
 * 4.其他字符，必须在'0'和'9'之间。
 *******************************************************/
bool Solution::isNumberic(char *string) {
    bool sign = false, hasE = false, decimal = false;
    int length = strlen(string);
    for (int i = 0; i < length; i++) {
        if (string[i] == 'E' || string[i] == 'e') {
            if (hasE) return false;
            if (length - 1 == i) return false;
            hasE = true;
        } else if (string[i] == '+' || string[i] == '-') {
            if (sign && string[i - 1] != 'E' && string[i - 1] != 'e') return false;
            if (!sign && i > 0 && string[i - 1] != 'E' && string[i - 1] != 'e') return false;
            sign = true;
        } else if (string[i] == '.') {
            if (hasE || decimal) return false;
            decimal = true;
        } else {
            if (string[i] < '0' && string[i] > '9') {
                return false;
            }
        }
    }
    return true;
}

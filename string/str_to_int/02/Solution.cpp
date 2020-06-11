//
// Created by chugang on 2020/6/11.
//
/**
 * 字符串转为整数，不考虑科学计数法。若考虑，我不能很快想出思路。
 * 思路：
 * 1.去掉空格。
 * 2.确定正负。
 * 3.将字符串转为整数：高位乘以10+低位值
 * 3.1.检测是否溢出。若溢出，返回最大或最小值。
 * 4.返回最终结果：符号（1或-1）乘以数字。
 * 难点：
 * 1.思路不顺畅的地方：去掉空格后，对正负号的判断。能不能用if...else？
 * 2.判断溢出的方法：
 * 2.1.拆分后判断。例如：最大数是99。
 * '100'转为整数的过程：
 * 2.1.1. 1 + 0 ，判断num = 1是否大于MAX/10
 * 2.1.2. 1*10 + 0，判断num = 10是否大于MAX/10
 * 2.1.3. 1*10*10 + 0，判断num = 100是否大于MAX/10。
 * 2.1.4. 若大于MAX/10，溢出；若等于MAX/10，再判断 低位num2 是否大于 MAX%10。若大于，溢出。
 * 2.1.5.难点：num == MAX/10，为何不判断num < MAX/10？这涉及到特定知识吗？依靠归纳而已，像这样的小问题，要快速归纳，
 * 遇到时能够顺畅、快速得出结论就行了。
 * 例子：最大值是99，字符串'89'。8 < MAX/10，80 + 9，绝对不可能大于99。高位值决定数字的大小。数字num1的高位值小于数字
 * num2的高位值，不必再比较两者的低位值，num1必定小于num2。这是常识。不相信，我可以再多举例子。
 */
#include "Solution.h"

int Solution::t_atoi(const char *str) {
    int len = strlen(str);
    if (len == 0) {
        return 0;
    }
    int i = 0;
    while (str[i] == ' ') { i++; };
    int sign = 1;   // 符号必须有默认值。
    // 对符号的处理，不能用if...else，而必须用if...else if...
    if (str[i] == '+') {
        sign = 1;
        i++;
    } else if (str[i] == '-') {
        sign = -1;
        i++;
    }
    int num = 0;
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
        int modNumber = str[i] - '0';
        if (isOutOfRange(num, modNumber)) {
            return sign > 0 ? INT_MAX : INT_MIN;
        }
//        num = num * 10 + modNumber;   // 乘以10的等价运算，先左位移1位，再左位移3位
        num = (num << 1) + (num << 3) + modNumber;
        i++;
    }
    return sign * num;  // 不要忘记符号
}

// 为什么无论number是正还是负，只需与INT_MAX比较就可？因为，这是归纳之后的结论。
// 负数，绝对值大于INT_MAX，只有两种情况：负数是INT_MIN或溢出。这两种情况，可以统一计算为INT_MIN。
bool Solution::isOutOfRange(int number, int modNumber) {
    if (number > INT_MAX / 10 || (number == INT_MAX / 10 && modNumber > INT_MAX % 10)) {
        return true;
    }
    return false;
}

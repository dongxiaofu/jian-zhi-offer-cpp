//
// Created by chugang on 2020/5/24.
//

#include "Solution.h"

bool Solution::match(char *str, char *pattern) {
    if (*str == '\0' && *pattern == '\0') {
        return true;
    }
    if (*str != '\0' && *pattern == '\0') {
        return false;
    }
    /************************************************************************
     * 分两种情况：1>第二个字符是'*';2>第二个字符不是'*'。
     * 1.第一种情况，可以匹配多个字符，也可以不匹配任何字符。理解这里，费时很久。
     * 2.第二种情况，若第一个字符相同，或不同但pattern的第一个字符是'.'，那么，第一个
     * 字符匹配；否则，不匹配。
     * 注意：看别人的代码，要先确定它是正确的，然后才去理解它。把错误的代码当成正确的，然后
     * 拼命去把它往正确的方向理解，这不科学。看不懂一种解法，尽快看其他解法。
     ***********************************************************************/
    if (*(pattern + 1) != '*') {
        if (*str == *pattern || (*str != '\0' && *pattern == '.')) {
            return match(++str, ++pattern);
        }
        return false;
    } else {
        // 不存在情况之一对应下面的情况之一
        if (*str == *pattern || (*str != '\0' && *pattern == '.')) {
            // todo 匹配零个。                         匹配多个。
            return match(str, pattern + 2) || match(str + 1, pattern);
        } else {
            return match(str, pattern + 2);
        }
    }
}

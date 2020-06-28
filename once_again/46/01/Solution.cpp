//
// Created by chugang on 2020/6/27.
//
/****************************************************
 * 把数字翻译成字符串
 * 给定一个数字，我们按照如下规则把它翻译为字符串：0 翻译成
 * “a” ，1 翻译成 “b”，……，11 翻译成 “l”，……，25 翻译成
 * “z”。一个数字可能有多个翻译。请编程实现一个函数，用来计算一
 * 个数字有多少种不同的翻译方法。
 * 思路：
 * 1.转化为"青蛙跳台阶，一次只能跳一格或二格"。
 * 2.dp[i] = dp[i-1] + d[i-2]。
 * 2.1.num[0--->i]
 * 2.1.1.num[0] + num[1--->i]   1次
 * 2.1.2.num[01] + num[2--->i]  2次
 * 2.1.3.为什么没有[012]？因为三位数字不能翻译成字符串。
 ****************************************************/
#include "Solution.h"

int Solution::translateNum(int num) {
    string numStr = to_string(num);
    int len = numStr.size();
    if (len == 0) {
        return 0;
    }
    vector<vector<int>> vv;
    vector<int> dp(len + 1, 1);   // 不能是vector<int> dp(len+1, 1),结果不正确
    for (int i = 1; i <= len; i++) {
        vector<int> result;
        dp[i] = dp[i - 1];
//        cout << numStr[i] << endl;
        result.push_back(numStr[i] - '0');
        if (i >= 2) {
            int v = (numStr[i - 2] - '0') * 10 + (numStr[i - 1] - '0');
//            cout << v << endl;
            if ((10 <= v && v <= 25)) {
                dp[i] += dp[i - 2];
                result.push_back(v);
            }
        }
        vv.push_back(result);
    }
    return dp[len];   // 不能是dp[len-1]
}

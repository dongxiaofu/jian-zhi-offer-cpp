//
// Created by chugang on 2020/6/27.
//
#include <iostream>
#include <vector>
#include "Solution.h"

int main() {
    using namespace std;

    vector<int> dp(4, -1);  // 创建一个包含4个元素的vector，每个元素的值是-1
//    cout << dp[0] << endl;
//    cout << dp[3] << endl;
//    cout << dp[4] << endl;

    Solution solution;
//    int count1 = solution.translateNum(12258);
//    cout<<count1<<endl; // 5

    int count2 = solution.translateNum(1211);
    cout<<count2<<endl;
    // [1,2,1,1]，[12,1,1],[12,11],[1,21,1],
    // todo 结果是5，可我怎么也不能列出5种组合
    // todo 怎么计算所有组合情况？毫无思路。
    // 想不出来，暂时放弃吧。半小时无头绪，就要放弃。


    return 0;
}

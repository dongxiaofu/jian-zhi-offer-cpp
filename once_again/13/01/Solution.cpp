//
// Created by chugang on 2020/6/27.
//
/*************************************************************
     * 机器人的运动范围
 * 地上有一个m行n列的方格，从坐标 [0,0] 到坐标 [m-1,n-1] 。一个机器人
 * 从坐标 [0, 0] 的格子开始移动，它每次可以向左、右、上、下移动一格
 * （不能移动到方格外），也不能进入行坐标和列坐标的数位之和大于k的格子。
 * 例如，当k为18时，机器人能够进入方格 [35, 37] ，因为3+5+3+7=18。
 * 但它不能进入方格 [35, 38]，因为3+5+3+8=19。请问该机器人能够到达多少
 * 个格子？
 * 思路：
 * 1.使用了动态规划（我不理解为何这就叫做使用了动态规划），使用了递归。
 * 2.核心函数
 * 2.1.movingCountCore
 * 2.1.1.遍历每个点[row,col]。
 * 2.1.2.当[row,col]被check的结果是true时，count+1。
 * 2.1.3.继续检查[row，col]的上下左右各个点十分符合要求。
 * 2.2.check
 * 2.2.1.满足条件的点
 * 2.2.1.1.row >= 0 && row < m
 * 2.2.1.2.col >= 0 && col < n
 * 2.2.1.3.[row,col]没有被访问过
 * 2.2.1.4.row各位数字之和 + cols各位数字之和 <= k
 * 2.3.getSumOfNum
 * 2.3.1.取模运算，获取num的各位数字之和。然后将数字向右移动一位（不是位移，
 * 而是十进制移动，即 num / 10）。
 * 2.3.2.循环维持的条件：num > 0。
 *************************************************************/
#include "Solution.h"

int Solution::movingCount(int m, int n, int k) {
    if (m <= 0 || n <= 0 || k < 0) {
        return 0;
    }
    bool *visited = new bool[m * n];
    for (int i = 0; i < m * n; i++) {
        visited[i] = false;
    }
    int count = movingCountCore(0, 0, k, visited, m, n);
    return count;
}

int Solution::movingCountCore(int row, int col, int k, bool *visited, int m, int n) {
    int count = 0;
    if (check(row, col, k, visited, m, n)) {
        visited[row * n + col] = true;
        count = 1 + movingCountCore(row - 1, col, k, visited, m, n) + movingCountCore(row + 1, col, k, visited, m, n)
                + movingCountCore(row, col - 1, k, visited, m, n) + movingCountCore(row, col + 1, k, visited, m, n);
    }
    return count;
}

bool Solution::check(int row, int col, int k, bool *visited, int m, int n) {
    if (row >= 0 && row < m && col >= 0 && col < n && (sum(row) + sum(col)) <= k && !visited[n * row + col]) {
        return true;
    }
    return false;
}

int Solution::sum(int num) {
    vector<int> digits = getDigitOfNum(num);
    int total = 0;
    for (auto digit:digits) {
        total += digit;
    }
    return total;
}

vector<int> Solution::getDigitOfNum(int num) {
    vector<int> digits;
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }
    return digits;
}

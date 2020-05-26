//
// Created by chugang on 2020/5/26.
//

#include "Solution.h"
/*******************************************************
 * 正确理解题意。
 * 1.从坐标(0,0)出发，统计从出发点朝上下左右四个方向
 * 所能到到的位置数量。
 * 2.不重复统计。
 * 3.往左运动后，再朝右运动，不管机器人如何从左方向到右方向。
 * 4.出发点只是(0,0)，不是有多个。
 * 如果别人把这个题目再复杂化，我应该就不会做了。
 * 时间复杂度O(n)。
 * 我发现，写测试用例，也比较有难度。
 *******************************************************/
int Solution::movingCount(int threshold, int rows, int cols) {
    if (threshold <= 0 || rows < 0 || cols < 0) {
        return 0;
    }
    bool *visited = new bool[rows * cols];
    memset(visited, 0, rows * cols);
    int counter = movingCountCore(threshold, rows, cols, 0, 0, visited);
    return counter;
}

int Solution::movingCountCore(int threshold, int rows, int cols, int row, int col, bool *visited) {
    int counter = 0;
    if (row >= 0 && row < rows && col >= 0 && col < cols && checkCoordinate(threshold, row, col) &&
        !visited[row * cols + col]) {
        // todo 遗漏了这句，导致退出码为11。找出错误，难。我看了正确代码才突然明白。
        // todo 由于使用了递归，想心算代码执行过程，我觉得困难。从逻辑上检查代码，效率反而会高些。
        visited[row * cols + col] = true;
        counter = 1 + movingCountCore(threshold, rows, cols, row, col - 1, visited)
                  + movingCountCore(threshold, rows, cols, row, col + 1, visited)
                  + movingCountCore(threshold, rows, cols, row - 1, col, visited)
                  + movingCountCore(threshold, rows, cols, row + 1, col, visited);
    }
    return counter;
}

int Solution::checkCoordinate(int threshold, int row, int col) {
    int sum = sumOfInteger(row);
    sum += sumOfInteger(col);
    if (sum > threshold) {
        return false;
    } else {
        return true;
    }
}
// 计算一个正整数各位数字之和
int Solution::sumOfInteger(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

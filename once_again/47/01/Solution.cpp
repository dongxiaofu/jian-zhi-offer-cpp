//
// Created by chugang on 2020/6/26.
//
/************************************************************
 * 在一个 m*n 的棋盘的每一格都放有一个礼物，每个礼物都有一定的价值（价值
 * 大于 0）。你可以从棋盘的左上角开始拿格子里的礼物，并每次向右或者向下移
 * 动一格、直到到达棋盘的右下角。给定一个棋盘及其上面的礼物的价值，请计算你
 * 最多能拿到多少价值的礼物？
 * 思路：
 * 1.使用动态规划（不理解，为啥这就是动态规划）
 * 2.右下角p坐标是[i,j]。
 * 2.p的上边p_up坐标是[i,j-1]。
 * 3.p的左边p_left坐标是[i-1,j]。
 * 4.从左上角到达[i,j]的最大值是max(f(i,j-1),f(i-1,j)) + v[i,j]。
 ************************************************************/
#include "Solution.h"

int Solution::maxValue(vector<vector<int> > grid) {
    int rows = grid.size();
    if (rows == 0) {
        return 0;
    }
    int cols = grid[0].size();
    if (cols == 0) {
        return 0;
    }

    vector<vector<int>> maxValues;

    for (int i = 0; i < rows; i++) {
        vector<int> maxValue;
        for (int j = 0; j < cols; j++) {
            int up = 0;
            int left = 0;
            if (i > 0) {
                left = maxValues[i - 1][j];
            }
            if (j > 0) {
                up = maxValue[j - 1];
            }
            maxValue.push_back(max(left, up) + grid[i][j]);
        }
        maxValues.push_back(maxValue);
    }
    int maxValue = maxValues[rows - 1][cols - 1];

    return maxValue;
}

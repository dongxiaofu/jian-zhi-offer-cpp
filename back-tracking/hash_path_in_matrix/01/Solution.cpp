//
// Created by chugang on 2020/5/26.
//

#include "Solution.h"
/*********************************************
 * 耗费时间几个小时。因为牛客网判定此代码不能通过，而
 * 我的本地测试结果却是通过。我反复检查自己的代码。
 * 我不具备心算调试这题的能力，用纸和笔又不愿意写出
 * 所有执行步骤。
 * 我用Java解答这个题目，遇到static问题。修改正确后，
 * 我到leetcode做了这道题，能通过。
 * 但是，在leetcode，又遇到了超时错误。
 * 这种解法，是《剑指offer》官方解答，时间复杂度至少
 * 是O(n2)，因为包含递归，我不知道怎么分析递归的时间
 * 复杂度。
 *********************************************/
bool Solution::hasPath(char *matrix, int cols, int rows, char *str) {
    if (matrix == nullptr || str == nullptr || cols < 1 || rows < 1) {
        return false;
    }
    bool *visited = new bool[cols * rows];
    memset(visited, false, cols * rows);
    bool isPath = false;
    int pathLength = 0;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            isPath = hasPathCore(matrix, cols, rows, str, col, row, pathLength, visited);
            if (isPath) {
                return true;
            }
        }
    }
    return isPath;
}

bool Solution::hasPathCore(char *matrix, int cols, int rows, char *str,
                           int col, int row, int &pathLength, bool *visited) {
    // 空字符串，找到路径（可询问确定是否这样的标准）；
    // 非空，当到了末尾时，意味着前一个字符是匹配的。若前一个字符不匹配，该函数会返回false，
    // 调用该函数的两层循环执行完毕，返回false。
    if (str[pathLength] == '\0') {
        return true;
    }
    bool isPath = false;
    int index = row * cols + col;
    if (col >= 0 && col < cols && row >= 0 && row < rows && matrix[index] == str[pathLength] && !visited[index]) {
        pathLength++;
        visited[index] = true;
        isPath = hasPathCore(matrix, cols, rows, str, col - 1, row, pathLength, visited)
                 || hasPathCore(matrix, cols, rows, str, col + 1, row, pathLength, visited)
                 || hasPathCore(matrix, cols, rows, str, col, row - 1, pathLength, visited)
                 || hasPathCore(matrix, cols, rows, str, col, row + 1, pathLength, visited);
        if (!isPath) {
            pathLength--;
            visited[index] = false;
        }
    }
    return isPath;
}


/****************************************************
 * 和为s的连续正数序列
 * 思路：
 * 1.目标数是target，它的一半是 num = target / 2。
 * 2.依次检查 2个数、3个数、4个数，直至num个数的和是否为target。
 * 3.检查每个数量的连续数之和时，又依次自增初始值，当这些连续数之和是target时，记录下来。
 * 该思路超出了时间限制。
 * ************
 * 28分。把思路转为代码，总感觉差点什么才能变成代码。
 * 12分。写出来。
 * 12分。心算检查代码。
 * 30分。找错误。看到结果，完全不知道为何会这样。
 * *********************
 * 7分。写出来。
 * 3分。检查。
 * 2分。找错误。
 ****************************************************/
#include "Solution.h"

vector<vector<int> > Solution::findContinuousSequence(int target) {
    vector<vector<int>> result;     // todo 初始化空值可以怎么写？
    if (target <= 1) {
        return result;
    }
    int middle = (target / 2);
//    for (int num = 2; num <= middle; num++) {
    for (int num = 2; num <= target; num++) {
        for (int start = 1; start <= middle; start++) {
            vector<int> arr;
            int sum = start;
            int next = start;
            arr.push_back(start);
            int count = 1;
            while (count < num) {
                sum += ++next;
                arr.push_back(next);
                // todo count++必须在count==num前面，count==num必须有，否则，统计2个连续整数时会被统计三个
                // todo 连续整数过程中2个连续整数之和为sum的情况统计进去。
                count++;
                if (sum == target && count == num) {
                    result.push_back(arr);
                }
            }
        }
    }

    return result;
}
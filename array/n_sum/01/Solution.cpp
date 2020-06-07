//
// Created by chugang on 2020/5/31.
//
/**********************************************************
 * 和为S的两个数字，时间复杂度O(?)。todo 我不会分析。
 * 思路：输入数据是input，和为S，小哨兵是small，大哨兵是big。哨兵
 * 初始值，small = 1, big = 2，子序列之和createSum = small+big。
 * 1.createSum > sum，createSum = createSum-small，small++。
 * 2.在循环体内执行第1步，循环进行的条件：createSum>sum && small < middle
 * 3.createSum = sum, [small,big]序列满足要求，存起来。
 * 4.createSum < sum，big++,createSum = createSum+big。
 * 5.在循环体内执行第1步到第4步。循环进行的条件：small < middle。
 * 注意：
 * 1.为什么small < middle？
 * middle = (sum+1)/2。经过牛客网验证，只能是middle = (sum+1)/2，
 * 不能是middle = sum/2。
 * todo 其实，我不是特别理解，原因是什么？经过观察，我发现，确实需要是
 * middle = (sum+1)/2。
 * 1>当sum = 6,middle = 3，若small = 3,不存在big+small = 6.(middle=(sum+1)/2或middle=sum/2，middle都是3）
 * 2>当sum = 5,middle = 3,若small = 3,不存在big+small = 6.<=== middle=(sum+1)/2
 * 3>当sum = 5,middle = 2,若small = 2,存在big+small = 5.<======== middle=sum/2
 * middle = sum/2时，sum为奇数和偶数时，是否存在big+small = sum
 * 的结果不一致，即，1>和3>的结果不一致，同样的标准，结果应该一样；当middle=(sum+1)/2时，结果一致。所以，选择
 * middle = (sum+1)/2。
 **********************************************************/
#include "Solution.h"

vector<vector<int>> Solution::FindContinuousSequence(int sum) {
    vector<vector<int>> res;
    int small = 1;
    int big = 2;
    // todo 有点难理解，不是看一眼就觉得应该如此。
    // todo 由于，子序列，至少2个数字，如果small等于middle，small+middle+big 必然 大于 sum
    // todo 所以，当small>=middle时，后面的子序列，不必去计算了。
    // todo 6月7日，我竟然看不懂前些天自己写的注释了。
    // todo 一组连续正数和为100的序列:18,19,20,21,22。middle = (100+1)/2 = 50。
    // todo 把sum=100当作连续正整数中的一个,1,2,3,,4...100，中间的数字是50。在这个序列中找子序列。
    // todo 当small=50时，big至少等于51,50+51 = 101 > 100(sum)，所以，small >= middle，sum
    // todo 必然小于 sum + middle。
    int middle = (sum + 1) / 2;
    int createSum = small + big;

    while (small < middle) {
        if (createSum == sum) {
            vector<int> sequence = SaveSubArray(small, big);
            res.push_back(sequence);
        }
        // todo 当子序列之和大于sum时，减掉子序列中的最小数字
        while (small < middle && createSum > sum) {
            createSum = createSum - small;
            small++;    // todo 必须放在这里加，不能放到if语句后面。因为，加了后，才可能是满足条件的子序列
            if (createSum == sum) {
                vector<int> sequence = SaveSubArray(small, big);
                res.push_back(sequence);
            }
        }

        big++;
        createSum += big;
    }
    return res;
}

vector<int> Solution::SaveSubArray(int small, int big) {
    vector<int> array;
    for (int i = small; i <= big; i++) {
        array.push_back(i);
    }
    return array;
}

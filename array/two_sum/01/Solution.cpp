//
// Created by chugang on 2020/5/31.
//
/**********************************************************
 * 和为S的两个数字，时间复杂度O(?)。todo 我不会分析。我觉得是O(log2N)。
 * 思路：输入数据是array，和为S的两个元素的乘积是product，两个目标元素
 * 是num1、num2。
 * 1.设置两个指针small，big。初始值，small指向第一个元素，big指向
 * 最后一个元素。
 * 2.array[small] + array[big] = S
 * array[small] * array[big] < product,product = array[small]+array[big]
 * num1 = array[small],num2 = array[big]
 * small++,big--
 * 3.array[small] + array[big] < S
 * small++
 * 4.array[small] + array[big] > S
 * big--
 * 注意：todo 易出错点。
 **********************************************************/
#include "Solution.h"

vector<int> Solution::FindNumbersWithSum(vector<int> array, int sum) {
    int length = array.size();
    vector<int> res;
    if (length == 0) {
        return res;
    }

    int product = 0xFFFFFFF;
    int createSum;
    int num1 = 0xFFFFFFF, num2 = 0xFFFFFFF;
    int small = 0, big = length - 1;
    while (small < big) {
        createSum = array[small] + array[big];
        if (createSum == sum) {
            int productTmp = array[small] * array[big];
            if (productTmp < product) {
                product = productTmp;
                num1 = array[small];
                num2 = array[big];
            }
            // todo 假设只small++，big不变，createSum绝对不会等于sum，只会大于sum。
            // todo 假设只big--，small不变，createSum只会小于sum。
            // todo 根据上面两点，就能够确定：同时需要small++、big--。
            // todo 我似乎总是容易想得多，而又不能很快消除自己的疑虑。比如，这样做了，
            // todo 会不会漏掉哪种组合？
            small++;
            big--;
        } else if (createSum > sum) {
            big--;  // todo 当small=0时，若small--，出错。
        } else {
            small++;    // todo 当big=length-1时，若big++，出错。
        }
    }

    if (num1 != 0xFFFFFFF && num2 != 0xFFFFFFF) {
        res.push_back(num1);
        res.push_back(num2);
    }

    return res;
}
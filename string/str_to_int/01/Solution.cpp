//
// Created by chugang on 2020/5/31.
//
/*********************************************
 * 把字符串转换成整数，时间复杂度O(n)。
 * 思路：输入字符串是str
 * 1.str是空，返回0。
 * 2.str[0]是'-'，负数；否则，非负数。正负用flag标志。
 * 3.str[0]是'+'或'-'，开始遍历str的起点是1；否则
 * 是0.
 * 4.遍历str，每个字符，必须在'0'<=ch<='9'；否则
 * 是0。
 * 5.对每个字符，执行res = res<<1 + res<<3 + str[i]&0xf。
 * 6.最终结果：res = res * flag。
 * 知识点：
 * 1. (res << 1) + (res << 3) 即 res*2+res*8=res*10
 * 不理解的错误：
 * 1.用例:-2147483649，对应输出应该为:-2147483649，你的输出为:
 * 2147483647。
 * todo 牛客网判题系统有问题。
 * 注意：
 * 溢出问题。
 * todo 回顾：
 * 初看这个题目，我考虑得太多：
 * 1.会不会是包含e的科学计数法？
 * 2.这就把题目复杂化了。可以问。
 * 3.实际上，不包含科学计数法，只有正负数、溢出、非法字符串等问题。
 *********************************************/
#include "Solution.h"

long Solution::StrToInT(string str) {
//    int siz = str.size();
//    if (siz < 1)
//        return 0;
//    bool flag = true;
//    if (str[0] == '-')
//        flag = false;
//    int res = 0;
//    for (int i = (str[0] == '+' || str[0] == '-') ? 1 : 0; i < siz; i++) {
//        if (str[i] < '0' || str[i] > '9')
//            return 0;
//        int symbol;
//        if (flag) {
//            symbol = 1;
//        } else {
//            symbol = -1;
//        }
//0x7FFFFFFF是int类型的最大值，0x80000000是最小值。
// 如果res > 0x7FFFFFFF成立，那么res已经溢出了，怎么还能比较大小？todo 留意这个问题。
//        res = (res << 3) + (res << 1) + (symbol * (str[i] & 0xf));//'0'和'9'低4位刚好是0～9
//        if ((flag == true && res > 0x7FFFFFFF) || (flag == false && res < 0x80000000)) {
//            return 0;
//        }
//    }
//    return res;

    int length = str.length();
    if (length == 0) {
        return 0;
    }
    int flag = 1;
    if (str[0] == '-') {
        flag = -1;
    }
    int start = ((str[0] == '+') || (str[0] == '-')) ? 1 : 0;
    long res = 0;
    for (int i = start; i < length; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
        res = (res << 1) + (res << 3) + (str[i] & 0xf);
    }

    return res * flag;
}

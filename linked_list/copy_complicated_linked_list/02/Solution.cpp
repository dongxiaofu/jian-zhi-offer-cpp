//
// Created by chugang on 2020/5/29.
//
/*******************************************
 * 复制复杂链表，时间复杂度O(n)。
 * 思路：
 * 1.将每个结点复制一个。
 * 2.N1是N2的克隆结点，N2的random是R2，N1的
 * random是R2->next。因为，R2->next是R2的克隆
 * 结点。
 * 3.分离出偶数位结点，这些结点组成克隆的结果。
 *******************************************/
#include "Solution.h"

RandomListNode * Solution::Clone(RandomListNode *pHead) {

}
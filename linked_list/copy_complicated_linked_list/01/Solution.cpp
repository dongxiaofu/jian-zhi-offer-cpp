//
// Created by chugang on 2020/5/29.
//
/*************************************************
 * 复制复杂链表，时间复杂度未知。
 * 我不知道如何分析递归的时间复杂度。
 * 思路：
 * 1.使用递归。克隆结点N1，得到新结点N2。
 * N2->lable = N1->lable。
 * N2的next和random使用递归，终止条件是n1的next或random
 * 为NULL。
 * 然后，通过递归复制得到：nextNode、randomNode
 * N2->next = nextNode
 * N2->random = randomNode
 * 2.不遍历旧链表，只需从头结点复制即可。
 * 注意：
 * 1.代码有错误：Exception: EXC_BAD_ACCESS (code=2, address=0x7ffee5a32ff8)。原因未知。
 * 2.对递归代码，断点调试，无济于事。
 *************************************************/
#include "Solution.h"

RandomListNode *Solution::clone(RandomListNode *pHead) {
    if (pHead == NULL) {
        return NULL;
    }
    RandomListNode *newPHead = copy(pHead);
    return newPHead;
}

RandomListNode *Solution::copy(RandomListNode *srcNode) {
    if (srcNode == NULL) {
        return NULL;
    }
    int label = srcNode->label;
    RandomListNode *node = new RandomListNode(label);
    RandomListNode *nextNode;
    if (srcNode->next != NULL) {
        nextNode = copy(srcNode->next);
    } else {
        nextNode = NULL;
    }
    node->next = nextNode;

    RandomListNode *randomNode;
    if (srcNode->random != NULL) {
        randomNode = copy(srcNode->random);
    } else {
        randomNode = NULL;
    }
    node->random = randomNode;

    return node;
}

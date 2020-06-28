//
// Created by chugang on 2020/6/28.
//
/****************************************************
 * 队列的最大值
 * 请定义一个队列并实现函数 max_value 得到队列里的最大值，要
 * 求函数max_value、push_back 和 pop_front 的均摊时间复杂
 * 度都是O(1)。
 * 若队列为空，pop_front 和 max_value 需要返回 -1
 * 思路：
 * 1.使用两个队列:Q(普通队列）、DQ(双端队列）。
 * 2.max_value:
 * 2.1.DQ是空，返回-1。
 * 2.2.DQ非空，返回DQ.front()。
 * 3.push_back:将插入的值是v
 * 3.1.将DQ中的值，从右往左，小于v的元素弹出，然后将v插入DQ。
 * 3.1.1.DQ存储非递增序列，从左往右。
 * 3.1.2.疑问：
 * 3.1.2.1假设DQ中只保存了DQ[0]、DQ[1]，而Q中保存了Q[0]、
 * Q[1]、Q[2]、Q[3]、Q[4]。
 * 3.1.2.2.DQ执行出队操作变为空后，Q中还有两个元素，max_value返回-1,
 * 这显然不正确。
 * 3.1.2.3.todo 然而，3.1.2.2情况一定不会出现。三言两语，我说不清楚。
 * 3.1.2.3.1.对Q执行入队操作，元素是非递增序列，比如，4,3,2,1
 * 3.1.2.3.2.对Q执行入队操作，元素无序，比如，1,3,4,2
 * 3.1.2.3.3.上面两种情况，证明，3.1.2.2情况一定不会出现。
 * 4.pop_front：
 * 4.1.Q是空，返回-1。
 * 4.2.Q非空，将弹出的元素top，然后弹出top。
 * 4.2.1.当top==DQ.front_top，对DQ执行front_pop操作。
 ****************************************************/
#include "Solution.h"

int Solution::max_value() {
    if (dequeue1.empty()) {
        return -1;
    }
    int front = dequeue1.front();
    return front;
}

// dequeue1中保存非递减序列，从左到右非递增
void Solution::push_back(int v) {
    while (!dequeue1.empty() && v > dequeue1.back()) {
        dequeue1.pop_back();    // 从右边弹出
    }
    dequeue1.push_back(v);      // 在右边插入
    queue1.push(v);
}

int Solution::pop_front() {
    if (queue1.empty()) {
        return -1;
    }
    int top = queue1.front();
    if (dequeue1.front() == top) {
        dequeue1.pop_front();   // 从左边弹出
    }
    queue1.pop();
    return top;
}
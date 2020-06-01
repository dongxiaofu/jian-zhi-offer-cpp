//
// Created by chugang on 2020/6/1.
//
/**************************************************
 * todo 耗费时间很多，消耗在：1.复习堆知识；2.看cpp的新api。
 * 获取数据流的中位数，时间复杂度O(？）。
 * 思路：
 * 1.用最大堆、最小堆存储数据。
 * 2.最大堆中的所有数据都小于最小堆中的所有数据，最小堆中的
 * 所有数据都大于最大堆中的最小数据。
 * 3.如果用数组存储最大堆、最小堆，那么第一个元素arr[0]是
 * 最大堆中的最大值，是最小堆中的最小值。
 * 4.最大堆的arr[0] < 最小堆中的arr[0]。
 * 5.插入数据
 * 5.1.当插入的数据是第奇数个数据时，比如第3个，插入最小堆。
 * 5.1.1.插入最小堆的数据，必须大于最大堆中的所有数据。
 * 5.1.2.将要插入的数据num与最大堆的arr[0]比较。
 * 5.1.2当num>arr[0]，直接将num插入最小堆。
 * 5.1.3当num<=arr[0]，将arr[0]插入最小堆，num插入最大
 * 堆，并对最大堆进行重建。
 * 5.2.当插入的数据是第偶数个数据，比如第2个，插入最大堆。
 * 5.2.1.插入最大堆的数据，必须小于最小堆的所有数据。
 * 5.2.2.将要插入的数据num，和最小堆的arr[0]比较。
 * 5.2.3.当num<arr[0]，直接将num插入最大堆。
 * 5.2.4.当num>=arr[0]，将arr[0]插入最大堆，num插入最小
 * 堆，并重建最小堆。
 * 6.获取中位数
 * 6.1.当两个堆的数据总个数是偶数时，中位数是
 * (smallHeap[0]+bigHeap[0])/2。
 * 6.2.当两个堆的数据总个数是奇数时，中位数是
 * smallHeap[0]。
 * 6.2.1.假设数据总数是3个，[4,5],[1]，前面是最小堆，后面
 * 是最大堆，那么，中位数是4。
 * 6.2.2。假设，数据总数是4个，最小堆[4,5]，最大堆[1,2]，
 * 那么，中位数是(2+4)/2。
 * 6.2.3.[1],[4,5];[1,2,1]的逆序列[1,2,1],[4,9,8]。
 * todo 最大堆的数组形式的逆序列A并非递增，但，按照非递减
 * 排序最大堆的逆序序列A和最小堆的序列B时，A的最后一个元素
 * 一定是A和B的分界线，B的第一个元素一定是B和A的分界线。
 * 类似[0,2]和[1,3]    总数为偶数
 * 类似[0,2]和[1,3,5]  总数为奇数
 **************************************************/
#include "Solution.h"

void Solution::Insert(double num) {
    // todo 容易出错，必须+1。total是第n个，不是对插入数据前已有数据的统计。
    // todo 插入的数据是第奇数个时，放入最小堆；否则，放入最大堆。
    int total = min.size() + max.size() + 1;
    if ((total & 1) != 0) {
        if (max.size() > 0 && num < max[0]) {
            max.push_back(num);
            make_heap(max.begin(), max.end(), less<double>());
            num = max[0];
            pop_heap(max.begin(), max.end(), less<double>());
            max.pop_back();
        }
        min.push_back(num);
        make_heap(min.begin(), min.end(), greater<double>());
    } else {
        if (min.size() > 0 && num > min[0]) {
            min.push_back(num);
            make_heap(min.begin(), min.end(), greater<double>());
            num = min[0];
            pop_heap(min.begin(), min.end(), greater<double>());
            min.pop_back();
        }
        max.push_back(num);
        make_heap(max.begin(), max.end(), less<double>());
    }
}

double Solution::GetMedian() {
    int total = min.size() + max.size();
    double median;
    if ((total & 1) == 0) {
        median = (min[0] + max[0]) / 2;
    } else {
        median = min[0];
    }
    return median;
}

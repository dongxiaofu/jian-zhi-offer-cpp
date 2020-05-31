//
// Created by chugang on 2020/5/31.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    void FindNumsAppearOnce(vector<int> data, int *num1, int *num2);

private:
    void Qsort(vector<int> &data, int low, int high);

    int Partition(vector<int> &data, int low, int high, int pivot);

    void swap(int *a, int *b);

    stack<int> DeleteDuplicationNum(vector<int> data);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

//
// Created by chugang on 2020/5/30.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getLeastNumbers(vector<int> input, int k);

private:
    void qSort(vector<int> &input, int low, int high);

    int partition(vector<int> &input, int low, int high);

    void swap(int *a, int *b);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

//
// Created by chugang on 2020/6/27.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string minNumber(vector<int> &nums);

private:
    static int compare(string &numStr1, string &numStr2);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

//
// Created by chugang on 2020/6/11.
//

#ifndef JIAN_ZHI_OFFER_CPP_SOLUTION_H
#define JIAN_ZHI_OFFER_CPP_SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> Permutation(string string1);

private:
    void PermutationCore(vector<string> &strs, string string1, int index);
    bool Judge(string string1, int cursor, int end);
};


#endif //JIAN_ZHI_OFFER_CPP_SOLUTION_H

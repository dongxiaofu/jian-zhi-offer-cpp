//
// Created by chugang on 2020/5/26.
//

#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    Solution solution;
    string string1 = "google";
    int index1 = solution.FirstNotRepeatingChar(string1);
    cout<<index1<<endl;

    return 0;
}
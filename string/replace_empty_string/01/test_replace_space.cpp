//
// Created by chugang on 2020/5/23.
//
#include <iostream>
#include "Solution.h"

int main(){

    char str[] = "how are you.";
    int length1 = 20;
    std::cout << str << std::endl;
    Solution solution;
    solution.replaceSpace(str, length1);
    std::cout << str << std::endl;

    char str2[] = " how are you.";
    int length2 = 20;
    std::cout << str2 << std::endl;
//    Solution solution;
    solution.replaceSpace(str2, length2);
    std::cout << str2 << std::endl;
}

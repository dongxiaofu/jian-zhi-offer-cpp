//
// Created by chugang on 2020/5/24.
//
#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution solution;
//    char *string1 = "aaa";  //  warning: ISO C++11 does not allow conversion from string literal to 'char *'
//    char *pattern1 = "a*a";
    char string1[] = "aaa";
    char pattern1[] = "a*a";
    bool res1 = solution.match(string1, pattern1);
    cout<<string1<<":"<<pattern1<<"======"<<res1<<endl;

    char string2[] = "aaa";
    char pattern2[] = "a.a";
    bool res2 = solution.match(string2, pattern2);
    cout<<string2<<":"<<pattern2<<"======"<<res2<<endl;

    char string3[] = "aaa";
    char pattern3[] = "b.a";
    bool res3 = solution.match(string3, pattern3);
    cout<<string3<<":"<<pattern3<<"======"<<res3<<endl;

    return 0;
}

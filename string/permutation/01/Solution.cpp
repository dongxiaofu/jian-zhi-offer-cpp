//
// Created by chugang on 2020/6/10.
//

#include "Solution.h"

void Solution::Permutation(char *str) {
    if (str == NULL) {
        return;
    }
    Permutation(str, str);
}

void Solution::Permutation(char *str, char *pBegin) {
    if (*pBegin == '\0') {
        cout << str << endl;
    } else {
        for (char *ch = pBegin; *ch != '\0'; ch++) {
            char temp = *ch;
            *ch = *pBegin;
            *pBegin = temp;

            Permutation(str, pBegin + 1);

            temp = *ch;
            *ch = *pBegin;
            *pBegin = temp;
        }
    }
}

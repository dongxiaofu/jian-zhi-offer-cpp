//
// Created by chugang on 2020/5/31.
//
#include <iostream>
#include "Solution.h"

void PrintArray(vector<int> array);

int main() {
    Solution solution;

    int tmp[6] = {1, 2, 3, 4, 5, 6};
    vector<int> array;
    array.insert(array.begin(), tmp, tmp + 6);
    vector<int> res = solution.FindNumbersWithSum(array, 7);
    PrintArray(res);

    int tmp2[6] = {1, 2, 4, 7, 11, 15};
    vector<int> array2;
    array2.insert(array2.begin(), tmp2, tmp2 + 6);
    vector<int> res2 = solution.FindNumbersWithSum(array2, 15);
    PrintArray(res2);

    int tmp3[6] = {1, 2, 4, 7, 11, 16};
    vector<int> array3;
    array3.insert(array3.begin(), tmp3, tmp3 + 6);
    vector<int> res3 = solution.FindNumbersWithSum(array3, 10);
    PrintArray(res3);

    return 0;
}

void PrintArray(vector<int> array) {
    int length = array.size();
    if (length == 0) {
        cout << "[]" << endl;
        return;
    }
    for (int i = 0; i < length; i++) {
        cout << array[i] << ",";
    }
    cout << endl;

}

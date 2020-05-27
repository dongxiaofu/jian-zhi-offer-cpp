//
// Created by chugang on 2020/5/27.
//

#include <iostream>
#include "Solution.h"

using namespace std;

void print_array(vector<int> array);

int main() {

    Solution solution;

    int arr1[7] = {4, 6, 3, 1, 5, 2,9};
    vector<int> v1;
    v1.insert(v1.begin(), arr1, arr1 + 7);
    solution.reOrderArray(v1);
    print_array(v1);

    return 0;
}

void print_array(vector<int> array) {
    int size = array.size();
    for (int i = 0; i < size; i++) {
        cout << array[i] << ",";
    }
}
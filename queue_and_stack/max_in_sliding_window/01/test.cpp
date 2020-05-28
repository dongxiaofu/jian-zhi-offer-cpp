//
// Created by chugang on 2020/5/28.
//

#include <iostream>
#include "Solution.h"

using namespace std;

void print_array(vector<int> array);

int main() {
    Solution solution;
    int array[] = {2, 3, 4, 2, 6, 2, 5, 1};
    vector<int> num;
    num.insert(num.begin(), array, array + 8);
    vector<int> maxValues = solution.maxInWindows(num, 3);
    print_array(maxValues);
    return 0;
}

void print_array(vector<int> array) {
    int size = array.size();
    int index = 0;
    while (size > index) {
        cout << array[index] << ",";
        index++;
    }
    cout << endl;
}
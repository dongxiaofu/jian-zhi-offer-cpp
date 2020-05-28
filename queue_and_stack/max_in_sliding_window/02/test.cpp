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


    int array2[] = {1,3,-1,-3,5,3,6,7};
    vector<int> num2;
    num2.insert(num2.begin(), array2, array2 + 8);
    vector<int> maxValues2 = solution.maxInWindows(num2, 3);
    print_array(maxValues2);

    int array3[] = {10,14,12,11};
    vector<int> num3;
    num3.insert(num3.begin(), array3, array3 + 8);
    vector<int> maxValues3 = solution.maxInWindows(num3, 0);
    print_array(maxValues3);



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
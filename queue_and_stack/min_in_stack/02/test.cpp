//
// Created by chugang on 2020/6/11.
//
#include <iostream>
#include "Solution.h"

using namespace std;

void print_vector(vector<int> array);

// 测试将一个vector v1赋值给另一个vector v2。
// 并且，测试改变v1后，v2是否会改变。====> 不会
void test_vector_assign();

int main() {
    Solution solution;

    test_vector_assign();

    solution.push(1);
    cout << solution.min() << endl;     // 1

    solution.push(2);
    cout << solution.min() << endl;     // 1

    solution.push(-3);
    cout << solution.min() << endl;     // -3

    solution.pop();
    cout << solution.min() << endl;     // 1

    solution.pop();
    cout << solution.min() << endl;     // 1

    return 0;
}


void print_vector(vector<int> array) {
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << ",";
    }
    cout << endl;
}

void test_vector_assign() {
    int temp1[3] = {1, 2, 3};
    vector<int> array1;
    array1.insert(array1.begin(), temp1, temp1 + 3);

    vector<int> array2;
    array2 = array1;
    print_vector(array2);

    array1[2] = 99;
    print_vector(array2);
}

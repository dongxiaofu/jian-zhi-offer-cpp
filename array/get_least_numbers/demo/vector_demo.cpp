//
// Created by chugang on 2020/5/30.
//
/******************************************************
 * vector、迭代器的使用
 ******************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v;
    v.insert(v.begin(), arr, arr + 5);
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
        cout << "\n=========S=============" << endl;
        it = v.erase(it);   // todo 删除，返回被删除元素的下一个元素
        cout << *it << endl;
        cout << "\n=========E=============" << endl;
        --it;
    }

    return 0;
}

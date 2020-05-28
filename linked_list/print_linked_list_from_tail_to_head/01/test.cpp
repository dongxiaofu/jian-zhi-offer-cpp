//
// Created by chugang on 2020/5/28.
//

#include <iostream>
#include "Solution.h"

using namespace std;

void print_array(vector<int> array);

int main() {
    Solution solution;

    ListNode node3 = ListNode(3);
    ListNode node2 = ListNode(2);
    node2.next = &node3;
    ListNode node1 = ListNode(1);
    node1.next = &node2;

    vector<int> res = solution.printListFromTailToHead(&node1);
    print_array(res);

    return 0;
}

void print_array(vector<int> array) {
    int size = array.size();
    for (int i = 0; i < size; i++) {
        cout << array[i] << ",";
    }
}

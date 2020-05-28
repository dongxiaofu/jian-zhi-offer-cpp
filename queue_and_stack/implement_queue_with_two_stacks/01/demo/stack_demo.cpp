//
// Created by chugang on 2020/5/28.
//

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> stack1;
    int a = 5, b = 6, c = 7;
    stack1.push(a);
    stack1.push(b);
    stack1.push(c);
    cout << stack1.top() << endl;
    while (stack1.empty() == false) {
        int top = stack1.top();
        stack1.pop();
        cout << top << ",";
    }
    cout << endl;

}


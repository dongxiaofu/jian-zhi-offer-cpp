//
// Created by chugang on 2020/5/31.
//
/******************************************************
 * 使用指针当参数改变数据。
 ******************************************************/
#include <iostream>

using namespace std;

void test(int *a, int *b);

void demo(int *a, int *c);

int main() {
//    int *a, *b;
//    test(a, b);
//    cout << *a << "," << *b << endl;      // todo 错误写法，原因未知
    int a, b;
    test(&a, &b);
    cout << a << "," << b << endl;
    int e, f;
    demo(&e, &f);
    cout << e << "," << f << endl;
    return 0;
}

void test(int *a, int *b) {
    *a = 5;
    *b = 6;
}

// todo 注意范例，参数
void demo(int *a, int *c) {
    int d = 78;
    int e = 99;
    // todo 注意范例
    *a = d;
    *c = e;
}


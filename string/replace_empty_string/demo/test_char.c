#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void error_demo();

void ok_demo();

int main() {

    char *str = "a b";
    printf("str len:%d\n", strlen(str));    // 3，包含空字符，ascii 0
    printf("str[3]:%d\n", str[3]);
    str++;
    str="cb";

    printf("str = %s\n", str);

//    error_demo();
//    ok_demo();
    return 0;
}

// EXC_BAD_ACCESS (code=2, address=0x10069bfa3)
//void error_demo() {
//    char *str = "hello";
//    str[0] = 'h';     // Bus error
//    str[5] = 'h';
//    str[6] = 'e';
//    str[7] = 'l';
//
//    printf("str = %s\n", str);
//}

void ok_demo() {
    char *str;
    str[0] = 'h';
//    str[6] = 'e';
//    str[7] = 'l';

    printf("str = %s\n", str);
}

void ok_demo2() {
    char str[4] = "abc";
    str[0] = 'h';
}


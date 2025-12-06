#include <stdio.h>

int globalVar = 10;   // global variable

void fun1() {
    printf("Inside fun1, globalVar = %d\n", globalVar);
}

void fun2() {
    printf("Inside fun2, globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main, globalVar = %d\n", globalVar);
    fun1();
    fun2();
    return 0;
}


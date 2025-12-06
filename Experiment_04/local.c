#include <stdio.h>

int globalNum = 20;  // global variable

void testLocal() {
    int localNum = 5;    // local variable
    printf("Inside function, localNum = %d\n", localNum);
}

int main() {
    testLocal();

    // Uncommenting line below gives ERROR: localNum is not accessible here
    // printf("%d", localNum);

    printf("Inside main, globalNum = %d\n", globalNum);

    return 0;
}


#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define ADD(a, b) ((a) + (b))

int main() {
    int num = 5;

    printf("Square of %d = %d\n", num, SQUARE(num));
    printf("Addition of 10 and 20 = %d\n", ADD(10, 20));

    return 0;
}


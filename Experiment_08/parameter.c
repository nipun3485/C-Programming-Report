#include <stdio.h>

void modify(int *x, int *y) {
    *x = *x + 10;
    *y = *y + 20;
}

int main() {
    int a = 5, b = 10;

    printf("Before modification:\n");
    printf("a = %d, b = %d\n", a, b);

    modify(&a, &b);

    printf("\nAfter modification:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}


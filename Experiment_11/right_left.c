#include <stdio.h>

int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Left Shift (x << 1) = %d\n", x << 1);
    printf("Right Shift (x >> 1) = %d\n", x >> 1);

    return 0;
}


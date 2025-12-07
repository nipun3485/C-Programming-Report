#include <stdio.h>

int fibo(int n) {
    if (n == 0 || n == 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int num;

    printf("Enter number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci sequence:\n");
    for (int i = 0; i < num; i++)
        printf("%d ", fibo(i));

    return 0;
}


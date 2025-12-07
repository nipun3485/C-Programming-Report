#include <stdio.h>

// Recursive factorial
int fact_rec(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact_rec(n - 1);
}

// Non-recursive factorial
int fact_nonrec(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, r;

    printf("Enter n and r for nCr: ");
    scanf("%d %d", &n, &r);

    if (r > n) {
        printf("Invalid! r must be <= n.\n");
        return 0;
    }

    int nCr = fact_rec(n) / (fact_rec(r) * fact_rec(n - r));

    printf("Factorial of %d (recursive): %d\n", n, fact_rec(n));
    printf("Factorial of %d (non-recursive): %d\n", n, fact_nonrec(n));
    printf("Binomial Coefficient nCr = %d\n", nCr);

    return 0;
}


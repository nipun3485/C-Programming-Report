#include <stdio.h>

int main() {
    float population = 100000;
    int year;

    for(year = 1; year <= 10; year++) {
        population = population + (population * 0.10); // increase by 10%
        printf("Population at the end of year %d = %.2f\n", year, population);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'A';

    int *ip = &a;
    float *fp = &b;
    char *cp = &c;

    printf("Original int pointer: %p\n", ip);
    ip++;
    printf("After ip++ : %p\n", ip);
    ip--;
    printf("After ip-- : %p\n\n", ip);

    printf("Original float pointer: %p\n", fp);
    fp++;
    printf("After fp++ : %p\n", fp);
    fp--;
    printf("After fp-- : %p\n\n", fp);

    printf("Original char pointer: %p\n", cp);
    cp++;
    printf("After cp++ : %p\n", cp);
    cp--;
    printf("After cp-- : %p\n", cp);

    return 0;
}


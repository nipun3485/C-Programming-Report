#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int len = strlen(str);

    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline from fgets
    str[strcspn(str, "\n")] = '\0';

    reverse(str);

    return 0;
}


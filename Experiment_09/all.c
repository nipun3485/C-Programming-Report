#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open an existing file in read mode
    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    // Read and display characters one by one
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}

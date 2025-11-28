#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];   // buffer to store each line

    // Open the file in read mode
    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    // Read file line by line using fgets()
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}


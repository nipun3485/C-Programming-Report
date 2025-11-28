#include <stdio.h>

int main() {
    FILE *fp;
    
    // Open a file in write mode
    fp = fopen("myfile.txt", "w");
    
    if (fp == NULL) {
        printf("Error! Could not create file.\n");
        return 1;
    }

    // Writing text to file
    fprintf(fp, "Hello! This is a sample text written to the file.\n");
    fprintf(fp, "This is Experiment 9 - Program 1.\n");

    // Closing the file
    fclose(fp);

    printf("File created and text written successfully.\n");

    return 0;
}

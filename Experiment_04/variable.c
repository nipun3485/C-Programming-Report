#include <stdio.h>

int main() {

    {
        int blockVar = 30;
        printf("Inside block, blockVar = %d\n", blockVar);
    }

    // Uncomment below to see error:
    // printf("%d", blockVar); // ❌ blockVar not accessible here

    printf("Outside block, blockVar cannot be accessed\n");

    return 0;
}


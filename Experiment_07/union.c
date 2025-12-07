#include <stdio.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[30];
    char state[30];
    char zip[10];
};

int main() {
    union Address A;

    printf("Enter your name: ");
    scanf("%s", A.name);
    printf("Name: %s\n", A.name);

    printf("\nEnter home address: ");
    scanf("%s", A.home_address);
    printf("Home Address: %s\n", A.home_address);

    printf("\nEnter city: ");
    scanf("%s", A.city);
    printf("City: %s\n", A.city);

    printf("\nEnter state: ");
    scanf("%s", A.state);
    printf("State: %s\n", A.state);

    printf("\nEnter ZIP: ");
    scanf("%s", A.zip);
    printf("ZIP: %s\n", A.zip);

    return 0;
}


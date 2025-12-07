#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
    float gross;
};

int main() {
    struct Employee emp[100];
    int n;

    printf("Enter number of employees (max 100): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", emp[i].name);

        printf("Enter basic pay: ");
        scanf("%f", &emp[i].basic);

        float DA = 0.52 * emp[i].basic;
        emp[i].gross = emp[i].basic + DA;
    }

    printf("\nEmployee Gross Salary List:\n");
    for (int i = 0; i < n; i++) {
        printf("%s  -  Gross Salary: %.2f\n", emp[i].name, emp[i].gross);
    }

    return 0;
}


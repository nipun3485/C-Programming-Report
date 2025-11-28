#include <stdio.h>

int isLeap(int year) {
    return (year % 400 == 0) ||
           (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int year, days = 0;

    printf("Enter a year: ");
    scanf("%d", &year);

    for (int i = 1; i < year; i++) {
        days += isLeap(i) ? 366 : 365;
    }

    int day = (days % 7);

    char *weekDays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("1st January %d was a %s.\n", year, weekDays[day]);

    return 0;
}


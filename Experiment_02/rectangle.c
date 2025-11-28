#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Input
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    // Calculations
    area = length * width;
    perimeter = 2 * (length + width);

    // Output using %f
    printf("Area of the rectangle = %f\n", area);
    printf("Perimeter of the rectangle = %f\n", perimeter);

    return 0;
}

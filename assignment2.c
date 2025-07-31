#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    float radius, side, length, width;
    float area, perimeter;

    printf("Choose shape:\n");

    printf("1. Circle\n2. Square\n3. Rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter radius: ");
        scanf("%f", &radius);

        area = PI * radius * radius;
        perimeter = 2 * PI * radius;

        printf("Area = %.2f\n", area);
        printf("Perimeter = %.2f\n", perimeter);
    }
    else if (choice == 2) {
        printf("Enter side length: ");
        scanf("%f", &side);

        area = side * side;
        perimeter = 4 * side;

        printf("Area = %.2f\n", area);
        printf("Perimeter = %.2f\n", perimeter);
    }
    else if (choice == 3) {
        printf("Enter the length: ");
        scanf("%f", &length);

        printf("Enter the  width: ");
        scanf("%f", &width);

        area = length * width;
        perimeter = 2 * (length + width);

        printf("Area = %.2f\n", area);
        printf("Perimeter = %.2f\n", perimeter);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}


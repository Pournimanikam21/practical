#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nCalculator Menu:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n"); 
    printf("Enter your choice (1 to 5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %d + %d = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %d - %d = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %d * %d = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("Result: %d / %d = %.2f\n", num1, num2, result);
            } else {
                printf("Cannot divide by zero.\n");
            }
            break;
        case 5:
            if (num2 != 0) {
                int mod = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, mod);
            } else {
                printf(" Cannot find modulus with zero.\n");
            }
            break;
        default:
            printf("Invalid choice! Please choose between 1 and 5.\n");
    }

    return 0;
}



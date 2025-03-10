// Fraction Operations Menu

#include <stdio.h>

int main() {
    int num1, den1, num2, den2, choice;
    printf("Enter first fraction (numerator denominator): ");
    scanf("%d %d", &num1, &den1);
    printf("Enter second fraction (numerator denominator): ");
    scanf("%d %d", &num2, &den2);

    printf("Choose operation:\n1. Add\n2. Subtract\n3. Multiply\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum: %d/%d\n", num1 * den2 + num2 * den1, den1 * den2);
            break;
        case 2:
            printf("Difference: %d/%d\n", num1 * den2 - num2 * den1, den1 * den2);
            break;
        case 3:
            printf("Product: %d/%d\n", num1 * num2, den1 * den2);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}

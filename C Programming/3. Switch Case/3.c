// Perform Operations on Two Numbers

#include <stdio.h>

int main() {
    int x, y, choice, num;
    printf("Enter two numbers (x and y): ");
    scanf("%d %d", &x, &y);

    printf("Choose an option:\n");
    printf("1. Check if x is equal to y\n");
    printf("2. Check if x is less than y\n");
    printf("3. Find quotient and remainder (x/y)\n");
    printf("4. Check if a number lies between x and y (inclusive)\n");
    printf("5. Swap x and y\n");
    
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("%s\n", (x == y) ? "Equal" : "Not Equal"); break;
        case 2: printf("%s\n", (x < y) ? "x is less than y" : "x is not less than y"); break;
        case 3: 
            if (y != 0)
                printf("Quotient: %d, Remainder: %d\n", x / y, x % y);
            else
                printf("Error: Division by zero!\n");
            break;
        case 4:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("%s\n", (num >= x && num <= y) ? "Number is in range" : "Number is out of range");
            break;
        case 5:
            x = x + y;
            y = x - y;
            x = x - y;
            printf("After swapping: x = %d, y = %d\n", x, y);
            break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}

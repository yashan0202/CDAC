// Even, Odd, Positive, Negative Menu

#include <stdio.h>

int main() {
    int num, choice;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Choose option:\n1. Check Even/Odd\n2. Check Positive/Negative\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("%s\n", (num % 2 == 0) ? "Even" : "Odd");
            break;
        case 2:
            printf("%s\n", (num >= 0) ? "Positive" : "Negative");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}

//  Simple Calculator Using Switch Case

#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+': printf("Result: %d\n", a + b); break;
        case '-': printf("Result: %d\n", a - b); break;
        case '*': printf("Result: %d\n", a * b); break;
        case '/': 
            if (b != 0)
                printf("Result: %.2f\n", (float)a / b);
            else
                printf("Error: Division by zero!\n");
            break;
        default: printf("Invalid operator!\n");
    }
    return 0;
}

//  Convert Decimal to Binary using Function

#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0)
        return;
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary: ");
    decimalToBinary(num);
    printf("\n");
    return 0;
}


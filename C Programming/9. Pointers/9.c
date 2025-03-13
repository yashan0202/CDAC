// 9. Recursive Sum of Digits


#include <stdio.h>

int sumOfDigits(int num) {
    if (num < 10)
        return num;
    return sumOfDigits(num / 10 + num % 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits until single digit: %d\n", sumOfDigits(num));
    return 0;
}

// 6. Reverse a Number using Recursion

#include <stdio.h>

void reverseNumber(int num) {
    if (num == 0)
        return;
    printf("%d", num % 10);
    reverseNumber(num / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed number: ");
    reverseNumber(num);
    printf("\n");
    return 0;
}

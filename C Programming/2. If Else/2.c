// Check if a Number is Divisible by 5 and 7

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 7 == 0)
        printf("%d is divisible by both 5 and 7\n", num);
    else
        printf("%d is not divisible by both 5 and 7\n", num);

    return 0;
}

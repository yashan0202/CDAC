// Display a Number if it is Negative

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("The number is negative: %d\n", num);

    return 0;
}

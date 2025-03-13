// 2. Add Two Numbers using Pointers

#include <stdio.h>

int main() {
    int a, b, sum;
    int *p1 = &a, *p2 = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = *p1 + *p2;
    printf("Sum = %d\n", sum);

    return 0;
}

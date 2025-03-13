// 4. Swap Two Numbers using Call by Value and Call by Reference

#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping (Call by Value): a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swapByValue(x, y);
    swapByReference(&x, &y);
    printf("After swapping (Call by Reference): x = %d, y = %d\n", x, y);

    return 0;
}

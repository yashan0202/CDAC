// 8. Recursive Power Function

#include <stdio.h>

int power(int x, int y) {
    return (y == 0) ? 1 : x * power(x, y - 1);
}

int main() {
    int x, y;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &y);
    printf("%d^%d = %d\n", x, y, power(x, y));
    return 0;
}

// 10. Recursive Fibonacci Sequence


#include <stdio.h>

int fib(int n) {
    return (n == 1) ? 0 : (n == 2) ? 1 : fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++)
        printf("%d ", fib(i));

    return 0;
}

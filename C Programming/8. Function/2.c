// 2. Sum of First 20 Natural Numbers using Recursion

#include <stdio.h>

int sumNatural(int n) {
    if (n == 1)
        return 1;
    return n + sumNatural(n - 1);
}

int main() {
    printf("Sum of first 20 natural numbers: %d\n", sumNatural(20));
    return 0;
}

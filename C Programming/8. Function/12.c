// 12. Various Functions

#include <stdio.h>

void maxMin(int a, int b) {
    printf("Max: %d, Min: %d\n", (a > b ? a : b), (a < b ? a : b));
}

void evenOdd(int num) {
    printf("%d is %s\n", num, (num % 2 == 0 ? "Even" : "Odd"));
}

void printPascal(int n) {
    for (int i = 0; i < n; i++) {
        int val = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

int main() {
    maxMin(5, 10);
    evenOdd(7);
    printPascal(5);
    return 0;
}

// 6. Check if a Number is Prime

#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    printf("First 10 Prime Numbers: ");
    int count = 0, num = 2;
    while (count < 10) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}

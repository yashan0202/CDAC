// 9. Check if a Number is Prime, Armstrong, or Perfect

#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0) return 0;
    return 1;
}

int isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    while (temp) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == num;
}

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++)
        if (num % i == 0)
            sum += i;
    return sum == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPrime(num))
        printf("The number is Prime.\n");
    if (isArmstrong(num))
        printf("The number is an Armstrong number.\n");
    if (isPerfect(num))
        printf("The number is a Perfect number.\n");

    return 0;
}

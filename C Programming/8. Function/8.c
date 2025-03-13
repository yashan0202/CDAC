// 8. Check if a Number is a Perfect Number

#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPerfect(num))
        printf("The number is a perfect number.\n");
    else
        printf("The number is not a perfect number.\n");

    return 0;
}

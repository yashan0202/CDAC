// 1. Sum of Odd and Even Numbers using Pointers

#include <stdio.h>

void sumOddEven(int *arr, int n, int *sumOdd, int *sumEven) {
    *sumOdd = 0;
    *sumEven = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0)
            *sumEven += *(arr + i);
        else
            *sumOdd += *(arr + i);
    }
}

int main() {
    int n, sumOdd, sumEven;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sumOddEven(arr, n, &sumOdd, &sumEven);
    printf("Sum of Odd Numbers: %d\n", sumOdd);
    printf("Sum of Even Numbers: %d\n", sumEven);

    return 0;
}

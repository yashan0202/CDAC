// 5. Check if a Number is Even

#include <stdio.h>

int isEven(int num) {
    return num % 2 == 0 ? 1 : 0;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        printf("%d is %s\n", arr[i], isEven(arr[i]) ? "Even" : "Odd");
    }

    return 0;
}

// 3. Copy One Array to Another using Pointers

#include <stdio.h>

void copyArray(int *source, int *dest, int n) {
    for (int i = 0; i < n; i++)
        *(dest + i) = *(source + i);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    copyArray(arr1, arr2, n);

    printf("Copied Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    
    return 0;
}

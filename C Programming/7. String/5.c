//5. Reverse a String using Recursion


#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    if (start >= end)
        return;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    reverseString(str, 0, strlen(str) - 1);
    printf("Reversed String: %s\n", str);

    return 0;
}

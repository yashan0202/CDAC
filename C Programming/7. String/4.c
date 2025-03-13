//4. Check if String is Palindrome

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return 0; // Not palindrome
    }
    return 1; // Palindrome
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    if (isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

// Invert the Case of a Character

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;  // Convert to lowercase
    else if (ch >= 'a' && ch <= 'z')
        ch = ch - 32;  // Convert to uppercase

    printf("Inverted case: %c\n", ch);
    return 0;
}

// 1. Check if a Character is Lowercase or a Space (Using Library Function)

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (islower(ch))
        printf("The character is lowercase.\n");
    else if (isspace(ch))
        printf("The character is a space.\n");
    else
        printf("The character is neither lowercase nor a space.\n");

    return 0;
}

// 11. Count Total Characters in Input using Recursion

#include <stdio.h>

int countChars() {
    char ch = getchar();
    if (ch == '\n')
        return 0;
    return 1 + countChars();
}

int main() {
    printf("Enter a line of text:\n");
    int count = countChars();
    printf("Total number of characters: %d\n", count);
    return 0;
}

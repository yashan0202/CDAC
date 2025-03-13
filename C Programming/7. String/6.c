//Find Maximum Occurring Character
#include <stdio.h>
#include <string.h>

char maxOccurringChar(char str[]) {
    int freq[256] = {0}; // ASCII size
    int max = 0;
    char maxChar;

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++; // Increment count of character
        if (freq[(int)str[i]] > max) {
            max = freq[(int)str[i]];
            maxChar = str[i];
        }
    }
    return maxChar;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    char maxChar = maxOccurringChar(str);
    printf("Maximum occurring character: %c\n", maxChar);

    return 0;
}

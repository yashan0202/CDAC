// 2. Find the Longest String

#include <stdio.h>
#include <string.h>

int main() {
    int n, maxLength = 0, index = 0;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); // Consume newline

    char str[n][100];
    
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        gets(str[i]);

        if (strlen(str[i]) > maxLength) {
            maxLength = strlen(str[i]);
            index = i;
        }
    }

    printf("Longest String: %s\n", str[index]);

    return 0;
}

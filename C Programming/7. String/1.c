// 1. Modify a Sentence

#include <stdio.h>
#include <string.h>

void modifySentence(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') 
            str[i] = '*';
        else if (str[i] >= 'A' && str[i] <= 'Z') 
            str[i] = str[i] + 32; // Convert to lowercase
        else if (str[i] >= 'a' && str[i] <= 'z') 
            str[i] = str[i] - 32; // Convert to uppercase
        else if (str[i] >= '0' && str[i] <= '9') 
            str[i] = '?'; // Replace digits with '?'
    }
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    gets(str);

    modifySentence(str);
    printf("Modified Sentence: %s\n", str);
    
    return 0;
}

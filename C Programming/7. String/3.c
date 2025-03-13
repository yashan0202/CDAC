// String Operations (Menu-Driven)


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter a string: ");
    gets(str1);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Length\n2. Copy\n3. Concatenation\n4. Compare\n5. Reverse\n");
        printf("6. Uppercase\n7. Lowercase\n8. Check case\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline

        switch (choice) {
            case 1:
                printf("Length: %d\n", (int)strlen(str1));
                break;
            case 2:
                strcpy(str2, str1);
                printf("Copied String: %s\n", str2);
                break;
            case 3:
                printf("Enter another string: ");
                gets(str2);
                strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;
            case 4:
                printf("Enter another string: ");
                gets(str2);
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;
            case 5:
                strrev(str1);
                printf("Reversed String: %s\n", str1);
                break;
            case 6:
                printf("Uppercase: %s\n", strupr(str1));
                break;
            case 7:
                printf("Lowercase: %s\n", strlwr(str1));
                break;
            case 8:
                if (str1[0] >= 'A' && str1[0] <= 'Z')
                    printf("String starts with uppercase\n");
                else
                    printf("String starts with lowercase\n");
                break;
            case 9:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

// 3. Library Book Structure - Menu Driven Program

#include <stdio.h>
#include <string.h>

struct LibraryBook {
    int id;
    char title[80];
    char publisher[20];
    int code;
    union {
        int no_of_copies;
        char month[10];
        int edition;
    } info;
    int cost;
};

void acceptDetails(struct LibraryBook books[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter Book ID: ");
        scanf("%d", &books[i].id);
        printf("Enter Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Enter Publisher: ");
        scanf(" %[^\n]", books[i].publisher);
        printf("Enter Code (1-Textbook, 2-Magazine, 3-Reference): ");
        scanf("%d", &books[i].code);
        
        if (books[i].code == 1) {
            printf("Enter Number of Copies: ");
            scanf("%d", &books[i].info.no_of_copies);
        } else if (books[i].code == 2) {
            printf("Enter Issue Month: ");
            scanf(" %[^\n]", books[i].info.month);
        } else if (books[i].code == 3) {
            printf("Enter Edition Number: ");
            scanf("%d", &books[i].info.edition);
        }

        printf("Enter Cost: ");
        scanf("%d", &books[i].cost);
    }
}

void displayBooks(struct LibraryBook books[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nBook ID: %d, Title: %s, Publisher: %s, Cost: %d\n", books[i].id, books[i].title, books[i].publisher, books[i].cost);
        if (books[i].code == 1)
            printf("Type: Textbook, Copies: %d\n", books[i].info.no_of_copies);
        else if (books[i].code == 2)
            printf("Type: Magazine, Issue Month: %s\n", books[i].info.month);
        else
            printf("Type: Reference Book, Edition: %d\n", books[i].info.edition);
    }
}

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    struct LibraryBook books[n];

    acceptDetails(books, n);
    printf("\nLibrary Book Details:\n");
    displayBooks(books, n);

    return 0;
}

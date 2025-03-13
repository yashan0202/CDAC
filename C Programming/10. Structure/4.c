// 4. Inventory Management System

#include <stdio.h>

struct Inventory {
    char name[50];
    float price;
    int quantity;
    char manufacture_date[15];
};

void acceptDetails(struct Inventory items[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter Item Name: ");
        scanf(" %[^\n]", items[i].name);
        printf("Enter Price: ");
        scanf("%f", &items[i].price);
        printf("Enter Quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Enter Manufacturing Date (DD-MM-YYYY): ");
        scanf(" %[^\n]", items[i].manufacture_date);
    }
}

void displayInventory(struct Inventory items[], int n) {
    printf("\nInventory Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Price: %.2f, Quantity: %d, Mfg Date: %s\n", 
               items[i].name, items[i].price, items[i].quantity, items[i].manufacture_date);
    }
}

int main() {
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);
    struct Inventory items[n];

    acceptDetails(items, n);
    displayInventory(items, n);

    return 0;
}

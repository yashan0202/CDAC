// 2. Employee Structure - Menu Driven Program

#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void acceptDetails(struct Employee e[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter ID: ");
        scanf("%d", &e[i].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", e[i].name);
        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }
}

void searchByName(struct Employee e[], int n, char name[]) {
    for (int i = 0; i < n; i++)
        if (strcmp(e[i].name, name) == 0)
            printf("ID: %d, Name: %s, Salary: %.2f\n", e[i].id, e[i].name, e[i].salary);
}

void searchById(struct Employee e[], int n, int id) {
    for (int i = 0; i < n; i++)
        if (e[i].id == id)
            printf("ID: %d, Name: %s, Salary: %.2f\n", e[i].id, e[i].name, e[i].salary);
}

void displayAll(struct Employee e[], int n) {
    for (int i = 0; i < n; i++)
        printf("ID: %d, Name: %s, Salary: %.2f\n", e[i].id, e[i].name, e[i].salary);
}

void displayAbove25000(struct Employee e[], int n) {
    for (int i = 0; i < n; i++)
        if (e[i].salary > 25000)
            printf("ID: %d, Name: %s, Salary: %.2f\n", e[i].id, e[i].name, e[i].salary);
}

void maxSalary(struct Employee e[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
        if (e[i].salary > e[maxIndex].salary)
            maxIndex = i;

    printf("Highest Salary: %s, Salary: %.2f\n", e[maxIndex].name, e[maxIndex].salary);
}

int main() {
    int n, choice, id;
    char name[50];

    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];

    acceptDetails(employees, n);

    while (1) {
        printf("\nMenu:\n1. Search by Name\n2. Search by ID\n3. Display All\n4. Display >25000 Salary\n5. Max Salary\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printf("Enter Name: "); scanf(" %[^\n]", name); searchByName(employees, n, name); break;
            case 2: printf("Enter ID: "); scanf("%d", &id); searchById(employees, n, id); break;
            case 3: displayAll(employees, n); break;
            case 4: displayAbove25000(employees, n); break;
            case 5: maxSalary(employees, n); break;
            case 6: return 0;
            default: printf("Invalid Choice!\n");
        }
    }
}

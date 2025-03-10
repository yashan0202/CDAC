// Display Employee Details

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    char department[50];
};

int main() {
    struct Employee emp[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Enter Employee Name, ID, and Department: ");
        scanf("%s %d %s", emp[i].name, &emp[i].id, emp[i].department);
    }
    
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, ID: %d, Department: %s\n", emp[i].name, emp[i].id, emp[i].department);
    }
    
    return 0;
}

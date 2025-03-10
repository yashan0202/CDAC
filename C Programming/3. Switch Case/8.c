// Employee Information Menu

#include <stdio.h>

int main() {
    char name[50];
    int emp_id;
    float salary;

    printf("Enter Employee Name: ");
    scanf("%s", name);
    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);
    printf("Enter Employee Salary: ");
    scanf("%f", &salary);

    printf("\nEmployee Details:\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n", name, emp_id, salary);
    return 0;
}

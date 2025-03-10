// Calculate Income Tax Based on Salary

#include <stdio.h>

int main() {
    float salary, tax;
    printf("Enter annual basic salary: ");
    scanf("%f", &salary);

    if (salary < 150000)
        tax = 0;
    else if (salary <= 300000)
        tax = 0.20 * salary;
    else
        tax = 0.30 * salary;

    printf("Income Tax: %.2f\n", tax);
    return 0;
}

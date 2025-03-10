//Compute Net Salary

#include <stdio.h>

int main() {
    float basic, net_salary, PF, Tax, HRA, DA;
    
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    PF = 0.02 * basic;
    Tax = 0.03 * basic;
    HRA = 0.05 * basic;
    DA = 0.08 * basic;

    net_salary = basic + HRA + DA - (PF + Tax);
    
    printf("Net Salary: %.2f\n", net_salary);
    return 0;
}

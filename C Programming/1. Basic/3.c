//Compute Total Marks and Percentage

#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    printf("Enter marks of 5 subjects (out of 100):\n");
    
    for(int i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    
    percentage = (total / 500) * 100;
    
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}

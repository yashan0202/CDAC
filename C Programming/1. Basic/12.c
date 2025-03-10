// Compute Simple Interest

#include <stdio.h>

int main() {
    float principal, rate, time, interest;
    
    printf("Enter Principal Amount, Rate of Interest, and Time (in years): ");
    scanf("%f %f %f", &principal, &rate, &time);
    
    interest = (principal * rate * time) / 100;
    
    printf("Simple Interest: %.2f\n", interest);
    return 0;
}

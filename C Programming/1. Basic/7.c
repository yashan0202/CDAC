// Convert Fahrenheit to Celsius and Kelvin

#include <stdio.h>

int main() {
    float fahrenheit, celsius, kelvin;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celsius = (5.0 / 9) * (fahrenheit - 32);
    kelvin = celsius + 273.15;
    
    printf("Celsius: %.2f\n", celsius);
    printf("Kelvin: %.2f\n", kelvin);
    return 0;
}

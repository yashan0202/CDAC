// Compute Surface Area and Volume of a Cylinder

#include <stdio.h>
#define PI 3.14

int main() {
    float radius, height, surface_area, volume;
    
    printf("Enter radius and height of cylinder: ");
    scanf("%f %f", &radius, &height);
    
    surface_area = 2 * PI * radius * radius + 2 * PI * radius * height;
    volume = PI * radius * radius * height;
    
    printf("Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume);
    return 0;
}

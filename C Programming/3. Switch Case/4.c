// Circle Calculations Menu

#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    float radius;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Choose an option:\n");
    printf("1. Area of Circle\n");
    printf("2. Circumference of Circle\n");
    printf("3. Volume of Sphere\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Area: %.2f\n", PI * radius * radius); break;
        case 2: printf("Circumference: %.2f\n", 2 * PI * radius); break;
        case 3: printf("Volume of Sphere: %.2f\n", (4.0 / 3.0) * PI * radius * radius * radius); break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}

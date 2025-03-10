// Display Grades for 3 Students

#include <stdio.h>

int main() {
    float marks[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    for (int i = 0; i < 3; i++) {
        if (marks[i] > 75)
            printf("Student %d: Grade A+\n", i + 1);
        else if (marks[i] > 65)
            printf("Student %d: Grade A\n", i + 1);
        else
            printf("Student %d: Grade B\n", i + 1);
    }

    return 0;
}

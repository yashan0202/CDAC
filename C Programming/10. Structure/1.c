// 1. Student Structure - Menu Driven Program


#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks[3];
    float percentage;
};

void acceptDetails(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter marks of 3 subjects: ");
        scanf("%f %f %f", &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);

        s[i].percentage = (s[i].marks[0] + s[i].marks[1] + s[i].marks[2]) / 3;
    }
}

void searchStudent(struct Student s[], int n, int roll) {
    for (int i = 0; i < n; i++) {
        if (s[i].roll_no == roll) {
            printf("Student Found: %s, Percentage: %.2f\n", s[i].name, s[i].percentage);
            return;
        }
    }
    printf("Student Not Found!\n");
}

void modifyStudent(struct Student s[], int n, int roll) {
    for (int i = 0; i < n; i++) {
        if (s[i].roll_no == roll) {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s[i].name);
            printf("Enter new marks of 3 subjects: ");
            scanf("%f %f %f", &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);

            s[i].percentage = (s[i].marks[0] + s[i].marks[1] + s[i].marks[2]) / 3;
            printf("Record Updated!\n");
            return;
        }
    }
    printf("Student Not Found!\n");
}

void displayAll(struct Student s[], int n) {
    for (int i = 0; i < n; i++)
        printf("Roll: %d, Name: %s, Percentage: %.2f\n", s[i].roll_no, s[i].name, s[i].percentage);
}

void displayAbove80(struct Student s[], int n) {
    for (int i = 0; i < n; i++)
        if (s[i].percentage > 80)
            printf("Roll: %d, Name: %s, Percentage: %.2f\n", s[i].roll_no, s[i].name, s[i].percentage);
}

void maxPercentage(struct Student s[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
        if (s[i].percentage > s[maxIndex].percentage)
            maxIndex = i;

    printf("Top Student: %s, Percentage: %.2f\n", s[maxIndex].name, s[maxIndex].percentage);
}

int main() {
    int n, choice, roll;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];

    acceptDetails(students, n);

    while (1) {
        printf("\nMenu:\n1. Search\n2. Modify\n3. Display All\n4. Display >80%%\n5. Max Percentage\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printf("Enter Roll No: "); scanf("%d", &roll); searchStudent(students, n, roll); break;
            case 2: printf("Enter Roll No: "); scanf("%d", &roll); modifyStudent(students, n, roll); break;
            case 3: displayAll(students, n); break;
            case 4: displayAbove80(students, n); break;
            case 5: maxPercentage(students, n); break;
            case 6: return 0;
            default: printf("Invalid Choice!\n");
        }
    }
}

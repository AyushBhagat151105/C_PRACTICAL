#include <stdio.h>

// Define a structure to store student information
struct Student {
    int rollNo;
    char name[50];
    float marks[9];
};

int main() {
    // Declare a variable of type Student
    struct Student student;

    // Input roll number, name, and marks of 3 subjects
    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("Enter marks of 9 subjects: ");
    for (int i = 0; i < 9; ++i) {
        scanf("%f", &student.marks[i]);
    }

    // Calculate total marks
    float totalMarks = 0;
    for (int i = 0; i < 9; ++i) {
        totalMarks += student.marks[i];
    }

    // Calculate percentage
    float percentage = (totalMarks / 9.0);

    // Print result
    printf("\nResult:\n");
    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Marks:\n");
    for (int i = 0; i < 9; ++i) {
        printf("Subject %d: %.2f\n", i + 1, student.marks[i]);
    }
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

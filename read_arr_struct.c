#include <stdio.h>
#include <string.h>

// Define a struct for Student
struct Student {
    int id;
    char name[50];
    float grade;
};

int main() {
    int numStudents;

    // Ask the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Declare an array of structs with the specified size
    struct Student students[numStudents];

    // Loop to read data for each student
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &students[i].id);

        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);  // Space before %[^\n] to handle whitespace

        printf("Enter Grade: ");
        scanf("%f", &students[i].grade);
    }

    // Print the array of structs
    printf("\nStudent Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Grade: %.2f\n", students[i].grade);
    }

    return 0;
}


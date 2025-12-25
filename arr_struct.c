#include <stdio.h>
#include <string.h>

// Define a struct for Student
struct Student {
    int id;
    char name[50];
    float grade;
};

int main() {
    // Declare an array of structs
    struct Student students[3];

    // Assign values to the first student
    students[0].id = 1;
    strcpy(students[0].name, "priya");
    students[0].grade = 88.5;

    // Assign values to the second student
    students[1].id = 2;
    strcpy(students[1].name, "sriya");
    students[1].grade = 92.0;

    // Assign values to the third student
    students[2].id = 3;
    strcpy(students[2].name, "saanvi");
    students[2].grade = 79.5;

    // Print the array of structs
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Grade: %.2f\n", students[i].grade);
        printf("\n");
    }

    return 0;
}


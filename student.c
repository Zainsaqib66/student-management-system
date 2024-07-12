#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the student structure
typedef struct {
    int id;
    char name[50];
    float marks;
} Student;

// Function prototypes
void addStudent();
void displayStudents();
void searchStudent();
void updateStudentMarks();

// Main function
int main() {
    int choice;

    while (1) {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudentMarks();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to add a student
void addStudent() {
    FILE *fp;
    Student student;

    fp = fopen("students.dat", "ab");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter student ID: ");
    scanf("%d", &student.id);
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter student marks: ");
    scanf("%f", &student.marks);

    fwrite(&student, sizeof(Student), 1, fp);
    fclose(fp);

    printf("Student added successfully!\n");
}

// Function to display all students
void displayStudents() {
    FILE *fp;
    Student student;

    fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nID\tName\t\tMarks\n");
    printf("----------------------------\n");
    while (fread(&student, sizeof(Student), 1, fp)) {
        printf("%d\t%s\t\t%.2f\n", student.id, student.name, student.marks);
    }
    fclose(fp);
}

// Function to search for a student by ID
void searchStudent() {
    FILE *fp;
    Student student;
    int id, found = 0;

    fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter student ID to search: ");
    scanf("%d", &id);

    while (fread(&student, sizeof(Student), 1, fp)) {
        if (student.id == id) {
            printf("\nStudent found!\n");
            printf("ID: %d\n", student.id);
            printf("Name: %s\n", student.name);
            printf("Marks: %.2f\n", student.marks);
            found = 1;
            break;
        }
    }
    fclose(fp);

    if (!found) {
        printf("Student with ID %d not found.\n", id);
    }
}

// Function to update student marks by ID
void updateStudentMarks() {
    FILE *fp, *temp;
    Student student;
    int id, found = 0;

    fp = fopen("students.dat", "rb");
    temp = fopen("temp.dat", "wb");

    if (fp == NULL || temp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter student ID to update marks: ");
    scanf("%d", &id);

    while (fread(&student, sizeof(Student), 1, fp)) {
        if (student.id == id) {
            printf("Enter new marks: ");
            scanf("%f", &student.marks);
            found = 1;
        }
        fwrite(&student, sizeof(Student), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found) {
        printf("Student marks updated successfully!\n");
    } else {
        printf("Student with ID %d not found.\n", id);
    }
}

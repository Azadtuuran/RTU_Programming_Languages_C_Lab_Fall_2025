// week5_task2_struct_save_load.c
// Task 2: Save and load structured records from a file
// Week 5 – Files & Modular Programming
// Author: [Your Name]
// Student ID: [Your ID]

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50

typedef struct {
    char name[MAX_NAME_LEN];
    int age;
    float gpa;
} Student;

// Function prototypes
void save_student(Student s, const char *filename);
Student load_student(const char *filename);

int main(void) {
    Student s1;
    strcpy(s1.name, "Alice");
    s1.age = 21;
    s1.gpa = 3.75f;

    const char *filename = "student.txt";

    // Save the student record
    printf("Saving student to file...\n");
    save_student(s1, filename);

    // Load the student record
    printf("Loading student from file...\n");
    Student s2 = load_student(filename);

    // Print loaded data to confirm correctness
    printf("Loaded student: %s, %d, GPA %.2f\n", s2.name, s2.age, s2.gpa);

    return 0;
}

// Saves a student struct to a file
void save_student(Student s, const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error: Could not open file %s for writing.\n", filename);
        exit(1);
    }

    fprintf(fp, "%s %d %.2f\n", s.name, s.age, s.gpa);
    fclose(fp);
}

// Loads a student struct from a file
Student load_student(const char *filename) {
    Student s;
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s for reading.\n", filename);
        exit(1);
    }

    fscanf(fp, "%s %d %f", s.name, &s.age, &s.gpa);
    fclose(fp);

    return s;
}

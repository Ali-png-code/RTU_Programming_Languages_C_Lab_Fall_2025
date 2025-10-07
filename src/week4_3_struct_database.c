/*
 * week4_3_struct_database.c
 * Author: [Ali Isayev]
 * Student ID: [241ADB069]
 * Description:
 *   Simple in-memory "database" using an array of structs.
 *   Students will use malloc to allocate space for multiple Student records,
 *   then input, display, and possibly search the data.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Define struct Student with fields name, id, grade
struct Student{
    int id;
    char name[50];
    float grade;
};

int main(void) {
    int n;
    struct Student *students = NULL;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number.\n");
        return 1;
    }

    // TODO: Allocate memory for n Student structs using malloc
    students = malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }



    // TODO: Read student data in a loop
     for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("  Name: ");

        fgets(students[i].name, sizeof(students[i].name), stdin);

         size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }

        printf("  ID: ");
        if (scanf("%d", &students[i].id) != 1) {
            printf("Invalid ID input.\n");
            free(students);
            return 1;
        }

        printf("  Grade: ");
        if (scanf("%f", &students[i].grade) != 1) {
            printf("Invalid grade input.\n");
            free(students);
            return 1;
        }

        while(getchar() != '\n');
    }

    // TODO: Display all student records in formatted output
    printf("\nAll Student Records:\n");
    printf("----------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name:  %s\n", students[i].name);
        printf("  ID:    %d\n", students[i].id);
        printf("  Grade: %.2f\n", students[i].grade);
    }

    // Optional: Compute average grade or find top student
    float sum = 0.0f;
    for (int i = 0; i < n; i++) {
        sum += students[i].grade;
    }
    printf("\nAverage Grade: %.2f\n", sum / n);


    // TODO: Free allocated memory
    free(students);

    return 0;
}

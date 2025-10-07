/*
 * week4_2_struct_student.c
 * Author: [Ali Isayev]
 * Student ID: [241ADB069]
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Students should define a 'Student' struct with fields like name, id, and grade.
 *   Then create a few instances and print them.
 */

#include <stdio.h>
#include <string.h>

// TODO: Define struct Student with fields: name (char[]), id (int), grade (float)
struct Student {
    char name[50];
    int id;
    float grade;
};
// Example:
// struct Student {
//     char name[50];
//     int id;
//     float grade;
// };

int main(void) {
    // TODO: Declare one or more Student variables
    struct Student s1, s2;

    // TODO: Assign values (either manually or via scanf)
    strcpy(s1.name, "Leyla Aliyeva");
    s1.id = 5854;
    s1.grade = 70.5;

    strcpy(s2.name, "Ali Isayev");
    s2.id = 1107;
    s2.grade = 93.4;

    // TODO: Print struct contents using printf
    printf("Student 1:\n");
    printf("  Name:  %s\n", s1.name);
    printf("  ID:    %d\n", s1.id);
    printf("  Grade: %.2f\n\n", s1.grade);

    printf("Student 2:\n");
    printf("  Name:  %s\n", s2.name);
    printf("  ID:    %d\n", s2.id);
    printf("  Grade: %.2f\n", s2.grade);

    return 0;
}

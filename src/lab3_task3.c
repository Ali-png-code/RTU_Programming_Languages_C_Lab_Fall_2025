/*
 * Lab 3, Task 3
 * Student Name, Student ID
 * Ali Isayev, 241ADB069
 *
 * Implement basic string handling functions.
 * Write your own versions of:
 *   - my_strlen (finds string length)
 *   - my_strcpy (copies string from src to dest)
 *
 * Rules:
 *   - Do not use <string.h> functions for strlen/strcpy.
 *   - Use loops and manual pointer/array access.
 *
 * Example:
 *   char s[] = "hello";
 *   int len = my_strlen(s);   // should return 5
 *
 *   char buffer[100];
 *   my_strcpy(buffer, s);     // buffer now contains "hello"
 */

#include <stdio.h>

// Function prototypes
int my_strlen(const char *str);
void my_strcpy(char *dest, const char *src);

int main(void) {
    // TODO: Test your functions here

    char test[] = "Programming in C";
    char copy[100];

    int len = my_strlen(test);
    printf("Length: %d\n", len);

    my_strcpy(copy, test);
    printf("Copy: %s\n", copy);

    return 0;
}

int my_strlen(const char *str) {
    // TODO: count characters until '\0'
    const char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - str;  // pointer difference gives length
}

void my_strcpy(char *dest, const char *src) {
    // TODO: copy characters until '\0'
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  
}
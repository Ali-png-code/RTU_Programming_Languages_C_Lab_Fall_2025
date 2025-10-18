// week5_task1_file_io.c
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// TODO: Fill in the missing parts marked below.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char filename[100] = "data.txt";
    char line[256];
    int lncount = 0;


    // TODO: 1. Open file for writing (mode = "w")
      fp = fopen(filename, "w");
    // TODO: 2. Check if file opened successfully
    if (fp == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    printf("\n--- Writing to file '%s' ---\n", filename);

    // TODO: 3. Write 2–3 lines of text to the file using fprintf()
    fprintf(fp, "This is line 1: Hello, file I/O! I'm Ali\n");
    fprintf(fp, "This is line 2: texting it to a file.\n");
    fprintf(fp, "This is line 3: C programming is fun for us.\n");

    // TODO: 4. Close the file
     fclose(fp);
    printf("Finished writing to file.\n");

    // TODO: 5. Open file again for reading (mode = "r")
     fp = fopen(filename, "r");
    // TODO: 6. Use fgets() in a loop to read and print each line to the console
     if (fp == NULL) {
        perror("Error is opening file for reading");
        return 1;
    }

    printf("\n- Reading from file '%s' -\n", filename);
    // TODO: 7. Close the file
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
        lncount++;
    }

    // BONUS: ask user for filename instead of using default "data.txt"
     printf("Text filename to use: ");
    if (scanf("%99s", filename) != 1) {
        fprintf(stderr, "Error reading filename.\n");
        return 1;
    }

    // BONUS: count number of lines read
    printf("\nTotal lines read: %d -\n", lncount);

    return 0;
}

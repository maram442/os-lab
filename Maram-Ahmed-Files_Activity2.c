
 #include <stdio.h>

int main() {
    FILE *file;  // File pointer

    // Step 1: Create and open a file for writing
    file = fopen("output.txt", "w");  // Open file in write mode
    if (file == NULL) {  // Check if the file was successfully opened
        printf("Error: Could not create the file.\n");
        return 1;
    }

    // Step 2: Write numbers from 1 to 10 into the file
    for (int i = 1; i <= 10; i++) {
        fprintf(file, "%d\n", i);  // Write each number followed by a newline
    }
    fclose(file);  // Close the file after writing

    printf("Numbers 1 to 10 have been written to output.txt.\n");

    // Step 3: Reopen the file for reading
    file = fopen("output.txt", "r");  // Open file in read mode
    if (file == NULL) {  // Check if the file was successfully opened
        printf("Error: Could not open the file for reading.\n");
        return 1;
    }

    // Step 4: Read the contents of the file and print them to the console
    printf("\nContents of output.txt:\n");
    char line[256];  // Buffer to hold each line
    while (fgets(line, sizeof(line), file) != NULL) {  // Read line by line
        printf("%s", line);  // Print the line to the console
    }
    fclose(file);  // Close the file after reading

    return 0;
}
#include <stdio.h>
FILE *fptr;

int main()
{
    fptr = fopen("test.txt", "r");

    // Declaring a string variable to store the contents of fptr
    char file[1000];

    // Checking if the file exists
    if (fptr != NULL)
    {
        // Using a loop to read the entire file
        while(fgets(file, 1000, fptr))
        {
            // Printing the contents of the file in the terminal
            printf("%s", file);
        }
    }
    else
    {
        // Handles the error of the file not existing
        printf("ERROR: File not found");
        return 1;
    }

    // Close the file
    fclose(fptr);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *students, studentsAttending; // Declaring a pointer and a size variable

    printf("Enter number of students attending this year: ");
    scanf("%d", &studentsAttending);

    students = calloc(studentsAttending, sizeof(*students)); // Allocating memory for students using calloc()

    // Checking if the pointer students is null, if so, it means the memory allocation failed
    if (students == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Printing out the amount of memory located for how many students at which memory location.
    printf("%lu bytes of memory allocated for %d students at memory address %p.\n", studentsAttending * sizeof(*students), studentsAttending, students);

    // Freeing memory from the pointer students
    free(students);
    // Setting students to null to prevent accidental usage which can lead to program corruption
    students = NULL;

    return 0;
}

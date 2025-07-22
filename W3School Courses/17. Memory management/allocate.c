#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable decleration
    int *students;
    int studentsAttending;

    printf("How many students are attending this year: ");
    scanf("%d", &studentsAttending);

    // Allocating with malloc
    students = malloc(studentsAttending * sizeof(*students));

    // Allocating with calloc
    students = calloc(studentsAttending, sizeof(*students));

    // Manually calculating and printing the size of the allocated memory
    printf("Allocated memory size: %lu bytes\n", studentsAttending * sizeof(*students));
    return 0;
}
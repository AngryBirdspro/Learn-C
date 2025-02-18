#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *students;
    int studentCount = 12;

    students = calloc(studentCount, sizeof(*students));

    // Printing the size of the allocated memory in bytes
    printf("%lu\n", studentCount * sizeof(*students));

    return 0;
}

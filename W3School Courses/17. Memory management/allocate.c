#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *students;
    int numStudents = 12;
    students = malloc(sizeof(*students));
    printf("%lu\n", numStudents * sizeof(*students));
    printf("%lu", sizeof(*students));

    return 0;
}

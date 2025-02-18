#include <stdio.h>
FILE *fptr;

int main()
{
    fptr = fopen("test.txt", "w");
    fclose(fptr);

    return 0;
}

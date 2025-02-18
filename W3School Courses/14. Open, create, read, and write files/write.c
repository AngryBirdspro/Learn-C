#include <stdio.h>
FILE *fptr;

int main()
{
    fptr = fopen("test.txt", "w");

    fprintf(fptr, "Hello world!");
    
    fclose(fptr);

    return 0;
}

#include <stdio.h>
FILE *fptr;

int main()
{
    fptr = fopen("test.txt", "a");

    fprintf(fptr, "\nI am Tom");
    
    fclose(fptr);

    return 0;
}

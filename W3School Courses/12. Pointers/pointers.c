#include <stdio.h>

int main()
{
    // Variable declaration
    int x = 0;
    int *y = &x;

    // Returns the memory location
    printf("%p\n", y);
    // Returns the value stored in the memory location of y
    printf("%d\n", *y);
    return 0;
}

#include <stdio.h>

int main()
{
    // Array declaration
    int x[] = {0, 1, 2, 3};
    int* y = &x[0];

    // Printing the dereferenced value of x which is the memory location of the first value (index 0) in the array
    printf("%d\n", *x);
    // Also printing the first element in the array for proof
    printf("%d\n", x[0]);

    // Printing the array x
    printf("%p\n", x);
    // Also printing the first referenced value to prove the array name is a pointer for its first element
    printf("%p\n", y);

    // Looping through each element's memory location in the array x
    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", &x[i]);
    }

    return 0;
}

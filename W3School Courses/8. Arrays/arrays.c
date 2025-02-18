#include <stdio.h>

int main()
{
    int x[] = {1, 2, 3, 4, 5};

    int y[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Printing the first element of the array x
    printf("%d\n", x[0]);
    // Printing the size of the array x in bytes
    printf("%lu\n", sizeof(x));
    // Using a for loop to print out every element in the array x
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", x[i]);
    }

    // Printing the first element in the first array in y
    printf("%d\n", y[0][0]);
    // Printing the first element in the second array in y
    printf("%d\n", y[1][0]);
    // Printing the size of the first array in y
    printf("%lu\n", sizeof(y[0]));
    // Printing the size of the second array in y
    printf("%lu\n", sizeof(y[1]));
    // Printing the size of y
    printf("%lu\n", sizeof(y));
    // Using a for loop to print out every element in the first array in y
    for (int i1 = 0; i1 < 2; i1++)
    {
        for (int i2 = 0; i2 < 3; i2++)
        {
            printf("%d\n", y[i1][i2]);
        }
    }
    // Using a for loop to print out every element in the second array in y
    for (int i3 = 0; i3 < 2; i3++)
    {
        for (int i4 = 0; i4 < 3; i4++)
        {
            printf("%d\n", y[i3][i4]);
        }
    }

    return 0;
}
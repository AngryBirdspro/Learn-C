#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, *ptr1, *ptr2, *ptr3, *ptr4;

    size = 4 * sizeof(*ptr1); // Calculating the size in bytes the amount of memory needed to allocate
    ptr1 = malloc(size); // Allocating the memory

    printf("%d bytes of memory allocated at %p.\n", size, ptr1);

    size = 6 * sizeof(*ptr1); // Resizing the memory to have 6 integers
    ptr2 = realloc(ptr1, size); // Reallocating the previous memory to the new memory

    printf("%d bytes of memory reallocated at %p.\n", size, ptr2);

    // FAILPROOF EXAMPLE BY CHECKING FOR NULL POINTERS
    ptr3 = malloc(4);
    ptr4 = realloc(ptr3, 8);

    // Checking if ptr4 is null, if so, it means the memory allocation has failed
    if (ptr4 == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    else
    {
        printf("8 bytes successfully reallocated at %p.\n", ptr4);
        ptr3 = ptr4;
    }

    return 0;
}
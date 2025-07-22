#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Allocate memory
    int *ptr;
    ptr = calloc(4, sizeof(*ptr));

    // Write to the memory
    *ptr = 2;
    ptr[1] = 4;
    ptr[2] = 6;

    // Read from the memory
    printf("%d\n", *ptr); // Pointer dereference
    printf("%d %d %d\n", ptr[1], ptr[2], ptr[3]); // Elements in the pointer

    // Character example
    int *ptr1 = malloc(4); // Allocating 4 bytes
    char *ptr2 = (char*) ptr1; // Initializing the memory as a char value

    /* 
    Integer translation of the hexadecimal 0x64636261 made up of the following bytes (because the system is little-endian, it means less significant bytes come in first): 
    _______________________________________
    |byte | hexadecimal | ASCII charracter|
    ---------------------------------------
    |0    |    0x61     |        a        |
    |1    |    0x62     |        b        |
    |2    |    0x63     |        c        |
    |3    |    0x64     |        d        |
    */
    ptr1[0] = 1684234849;

    printf("%d is %c %c %c %c\n", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]);

    return 0;
}

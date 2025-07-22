# Memory management in C
## Static memory
**Static memory**, also known as **compile-time memory**, is memory that is reserved *before* the program runs. When the program is compiled, C *automatically* reserves space for every variable.

## Dynamic memory
### What is dynamic memory
**Dynamic memory**, also known as **runtime memory**, is memory that is reserved *after* the program runs. Contrary to static/compile-time memory, the user has *full control* over the memory and can write code to reserve and use memory. Dynamic/runtime memory can *only be accessed with pointers* as they do not belong to a variable. To allocate dynamic memory, the functions [**malloc()**](#malloc) or [**calloc()**](#calloc) from the <stdlib.h> header file can be used which allocates memory and then returns a pointer to its address.

### malloc()
```c
int *ptr = malloc(size);
```
The "malloc()" function only includes 1 parameter which is the size in bytes of the memory being allocated. However, the data in the memory allocated is unpredictable meaning something must be written into the memory before reading it to avoid unexpected values.

### calloc()
```c
int *ptr = calloc(amount, size);
```
The "calloc()" function only includes 2 parameters, one the amount of items, and the other being the size of each item in bytes of the memory being allocated. This function writes zeroes into all of the allocated memory which can make it slightly less efficient.

### sizeof()
The **sizeof()** operator can be used in memory management to ensure the correct amount of memory is allocated.
```c
int *ptr1, *ptr2;
ptr1 = malloc(sizeof(*ptr1));
ptr2 = calloc(1, sizeof(*ptr2));
```
**sizeof(\*ptr)** tells C to measure the size of the data at the address and will measure the size of the pointer itself if written as **sizeof(ptr)**. The **sizeof()** operator cannot measure the amount of dynamic/runtime memory being allocated (it can be manually done) but rather the size of the *data type*.

## Stack memory
**Stack memory** is a type of [dynamic memory](#dynamic-memory) reserved for variables *declared inside functions*. Variables in a function use  stack memory rather than static memory. Once the function is called, stack memory is allocated for the variabled in the function and is freed *after the function is called*. It is good to be aware of stack memory to be able to to handle memory usage of nested function calls and recursion. When recursion repeats itself too much, it can take up too much stack memory and once that happens, it is called a **stack overflow**.

## Accessig memory
[Dynamic memory](#dynamic-memory) behaves similarly to an array – its *data type* is specified by the type of the pointer. Just like an array, referring to the **index number** of dynamic memory accesses its elements, or by simply dereferencing the pointer. Dynamic memory *does not* have its own data type, it is just a sequence of bytes. The data in the memory can be interpreted as a type based on the data type of the pointer.
```c
// Referring to the index number
ptr[0] = 12;

// Dereferencing the pointer
*ptr = 12;
```
In the example below, a four byte pointer can be interpreted as one integer value or an array of four char values (1 byte each).
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1 = malloc(4);
    char *ptr2 = (char*) ptr1;
    ptr1[0] = 1684234849;
    printf("%d is %c %c %c %c", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3])
    return 0;
}
```

## Reallocate memory
Memory can be *reallocated* if the amount is too much or too little. When reallocating memory, a different (usually larger) amount of memory is reserved while keeping the data stored in it. The **realloc()** function can be used to do this which takes 2 parameters – realloc(*ptr1*, *size*). realloc() will attempt to resize the memory at ptr 1 and return the same memory address, if it cannot resize the memory at the current address it will allocate the memory to a different address and return that address instead. When realloc() returns a different memory address, the memory at the original address is no longer safe to use. When reallocation is done, it is good to asign a new pointer to the previous variable so that the old pointer cannot be accidentally used. In the unlikely case of memory reallocation failing which causes realloc() to return a **null pointer**, it is a good idea to have the program to be failproof.

## Deallocate (free) memory
When allocated memory is no longer needed, it is good practice to deallocate, or free it. [Dynamic memory](#dynamic-memory) stays reserved until it is deallocated or when the program ends. Once the memory is deallocated, it can be used by other programs or even allocated to another part of the user's program. The **free()** function can be used to deallocate memory.
```c
int *ptr;
ptr = malloc(sizeof(*ptr));
free(ptr);
ptr = NULL;
```
It is good practice to set a pointer to null after freeing the memory to ensure it cannot be accidentally used later on which can cause corruption in the program or other programs.

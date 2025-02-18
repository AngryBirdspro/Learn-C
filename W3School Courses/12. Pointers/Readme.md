# Pointers
## What is a pointer
A **pointer** is essentially a variable that stores the **hexadecimal value** of **another variable's memory location**. When declaring a pointer, it _must be the same data type_ as the variable it is "pointing to" and must be declared with an astrix "*" to tell the compiler that it is a pointer and not an ordinary variable. Below is an example:
```c
// The data types here MUST be the same
int variable = 0;
int* pointer = &variable

```

## Usages of the astrix "*" when used with pointers
Although the astrix is used to declare a pointer, it can also be used as a **dereference operator**. What this essentially does is extracts the referenced value from the memory location and outputs the value itself instead of the memory location of the value. Below is an example:
```c
int variable = 0;
int* pointer = &variable

// Returns the memory location of "variable"
printf("%p", pointer)
// Returns the value stored in the memory location of "pointer"
printf("%d", *pointer)

```

## The relationship of a pointer and an array
When printing the name of the array with printf(), the memory location of the first element (index 0) in the array is printed because essentially, the name of the array is the pointer for the first element. It can be proven by printing the name of the array along with directly setting a pointer for the first element shown below:
```c
// Printing the array x
printf("%p\n", x);
// Also printing the first referenced value to prove the array name is a pointer for its first element
printf("%p\n", y);
```

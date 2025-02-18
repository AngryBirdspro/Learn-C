# Memory location
## Accessing the memory
When assigning a vaule, it is stored into a memory address/location, which can be accessed with printf() by first using the %p format specifier which tells the compiler to return the assigned value in a hexadecimal value and then using the & symbol before the variable to tell the compiler it is a pointer which will, in conclusion, return a hexadecimal value of the pointer which is the memory location of the assigned value within your system. Below is an example:

```c
// %p tells the compiler to return the requested data in pointer (hexadecimal) form and the reference operator (&) after the variable tells the compiler it is a pointer to it knows to print the reference and not the variable in hexadecimal value
printf("%p", &variable)
```

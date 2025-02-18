# Memory management
## Allocating memory
**Static memory** is simply memory that is reserved for variables _before the program runs_. Allocation of static memory is also known as **compile-time-memory** allocation. C will automatically allocate memory for each variable every time the program is compiled. For better control over static memory, a concept called **Dynamic memory** is needed. Dynamic memory is memory allocated _after the program starts running_, allocation of dynamic memory can also be referred to as **runtime memory**. Unlike static memory, the user has _full control_ over how much memory is being used _at any time_. Dynamic memory can only be accessed with pointers and to allocate dynamic memory, the "calloc()" or "malloc()" can be used and accessed from the C standard library: <stdlib.h>. The 2 functions mentioned allocate memory and return a pointer to its address. Below is the basic syntax for malloc() and calloc():

```c
int *method1 = malloc(size); // The malloc() function has 1 parameter which is the size needed to be allocated in bytes
int *method2 = calloc(amount, size); // The calloc() function has 2 parameters, amount of items to allocate, and the size
```

The data in the memory allocated by the mallloc() function is unpredictable, so to avoid unexpected values, _always write something into the memory before reading it_. calloc() writes zeroes into all of the allocated memory making it less efficient than malloc(). Using sizeof() can help allocate the correct amount of memory for a data type shown below:

```c
int *method1, *method2;
method1 = malloc(sizeof(*method1));
method2 = calloc(1, sizeof(*method2));
```

Always remember to include the * before the variable in sizeof() otherwise the size of the pointer itself will be measured instead. The memory size needs to be manually calculated by multiplying the amount of items by the size of that datatype. An example is shown below:

```c
printf("%d\n", studentCount * sizeof(*students));
```

**Stack memory** is a type of dynamic memory reserved for _variables declared in functions_. Variables in functions use _stack memory rather than static memory_. When any function is called, stack memory is allocated for the variables in the function and the stack memory is freed _after the function returns_. Being aware of stack memory can help handle memory usage when functions are called and recursion. Recursion that repeats itself too much can take up too much memory and when that occurs, it is called a **stack overflow**.

## Accessing memory
To access and element in dynamic memory, simply refer to its **index number** or simply **dereference the pointer**.

# Boolean logic in C
## Boolean library
The boolean functions **are not a native to C** meaning they must be manually imported using the header file <stdbool.h>.

## Returned values
Boolean values, by default, return either 1 or 0 which are their integer values, but can be changed using a function that needs to be manually declared as shown below.
```c
#include <stdio.h>
#include <stdbool.h>

const char* boolToString(bool value) 
{
    return value ? "true" : "false";
}

int main() 
{
    bool condition1 = true;
    bool condition2 = false;

    printf("Condition 1 is: %s\n", boolToString(condition1));
    printf("Condition 2 is: %s\n", boolToString(condition2));

    return 0;
}
```
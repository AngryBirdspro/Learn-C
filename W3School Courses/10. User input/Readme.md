# User input
## scanf()
Just like printf() (print format), scanf() (scan format) is also a function from the standard input output library but is used to detect input from the library. The difference between C and differet programming languages is that the reference operator must be added to the variable in the scanf() function to manually save it. Below is an example:
```c
scanf("%d", &num)
```

## fgets()
Like many other programming languages, C considers whitespaces such as spaces and tabs terminating characrters meaning when C is receiving input it will stop reading as soon as one of those characters show in the terminal. In order to receive the entire line and not terminate at the detection of whitespace, the fgets() function can be used but certain arguments need to be included, which includes the variable name, sizeof(), and stdin. Below is an example:
```c
char fullName[30];

printf("Type your full name: \n");
fgets(fullName, sizeof(fullName), stdin);

printf("Hello %s", fullName);
```

## Problem with using fgets() and scanf() simultaneously
When using scanf() and fgets simultaneously, it will result in an error. The issue is scanf() reads an integer and leaves a newline character in the buffer. So fgets() only reads newline and the next string is ignored by the program. A possible solution is to add a newline character such as "\n" or even a space to terminate the first input and move onto the next input. Below is an example plus another of using scanf() in a loop:
```c
// GLITCHED VERSION (fgets() + scanf())
#include <stdio.h> 
  
int main() 
{ 
    int x; 
    char str[100]; 
    scanf("%d", &x); 
    fgets(str, 100, stdin); 
    printf("x = %d, str = %s", x, str); 
    return 0; 
}

// GLITCHED VERSION (LOOP)
#include <stdio.h> 
  
int main() 
{ 
    char c; 
    printf("Press q to quit\n"); 
    do { 
        printf("Enter a character\n"); 
        scanf("%c", &c); 
        printf("%c\n", c); 
    } while (c != 'q'); 
    return 0; 
}

// FIXED VERSION (fgets() + scanf())
#include <stdio.h> 
  
int main() 
{ 
    int x; 
    char str[100]; 
    scanf("%d\n", &x); 
    fgets(str, 100, stdin); 
    printf("x = %d, str = %s", x, str); 
    return 0; 
}

// FIXED VERSION (LOOP)
int main() 
{ 
    char c; 
    printf("Press q to quit\n"); 
    do { 
        printf("Enter a character\n"); 
        scanf("%c\n", &c); 
        printf("%c\n", c); 
    } while (c != 'q'); 
    return 0; 
}

```

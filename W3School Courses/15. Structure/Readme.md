# C structure
## Creating a structure
In C, it is possible to assign variables that are related in any way into a chunk of code by declaring them in what is called a **structure** (or struct), with each variable in a structure referred to as a **member**. Unlike arrays, structures _can contain variables with different data types_. Below is an example:

```c
struct Structure
{
    int integer;
    float decimal;
    char character;
    char string[];
    bool trueOrFalse;
}; // Structures must end with a semicolon
```

## Using or accessing a structure
When accessing the structure in int main(), it must be defined into a variable first. The "struct" keyword is first used, followed by the name of the structure, and the name of the variable. To actually use the members of a structure, the dot syntax is used. Below is an example:

```c
struct Structure s1;
s1.integer = 1;
printf("%d", s1.integer)
```

## Assigning a string to a structure
Because a string in C is actually just a character array, it is not possibe to assign a string into a "string variable" in a structure. Instead, there are 2 ways to achieve this:

```c
strcopy(s1.String, "Text to be inserted"); // The strcopy() function can be used
struct Structure s1 = {10, 'A', "String"}; // When using this method, always put the order of the inserted values the same as the variable decleration order in the structure
```

## "Copying" a structure
To "copy" a structure in C, it can be done by simply assigning the values of a structure to another as shown below:

```c
struct Structure s1 = {10, 'A', "Text", 1.1, true};
struct Structure s2;
s2 = s1;
```

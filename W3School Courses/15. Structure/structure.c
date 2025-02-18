#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Structure
{
    int integer;
    float decimal;
    char string[100];
    char character;
    bool trueOrFalse;
};

int main()
{
    struct Structure s1;

    // Basic syntax to assign a value to a variable in a structure
    s1.character = 'r';
    printf("%c\n", s1.character);

    // Basic syntax to assign a string value to a variable in a structure
    strcpy(s1.string, "Hello World");
    printf("%s\n", s1.string);

    // Complex but faster syntax to assign values to variables in a structure (Assigned values must be the same order as the variable declaration in the structure)
    struct Structure s2 = {1, 1.1, "String", 'C', true};
    printf("%d, %f, %s, %c, %d", s2.integer, s2.decimal, s2.string, s2.character, s2.trueOrFalse);

    return 0;
}
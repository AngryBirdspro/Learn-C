# Introduction to Data Types and Variables
## Data types
Like in most programming languages, C has these basic variable types: _int_, _float_, _double_, _string_, _char_, _bool_ (boolean). A char is a single character that is enclosed with single quotation marks so that C knows that it is a character and not a string. An integer usually contains 2-4 bytes, a float contains 4 bytes, a double contains 8 bytes, while a character contains 1 byte

## Constant variable
A constant variable is simply any variable that cannot be changed throught a program once it has been declared.

## How to declare string
_Strings_ can only be enclosed in double quotation marks unlike Python for example which can be enclosed with either quotation marks, C does this to make it easier to determine if a variable is a char or string. 

## Constant variable
A _constant variable_ (const int x) is a variable that cannot be modified once declared.

## Double vs float
Both **double** and **float** mean a number with decimal places, but the difference has to do with the number of decimal places within that number. A float is used with numbers with/less thatn 6-7 decimal places while doubles are used for decimals with ~15 places or more (such as an infinite decimal). Generally, it is considered safer to use a double if the programming language offers that data type to not run into errors with a number that has too many decimal places for a float to handle which can cause errors.

## Decimal precision
To tell the compiler how many decimal places are needed, simply type printf("%.1lf", num)

# Format specifiers
## Basic syntax
A **Format specifier** is used with the function printf() which allows the compiler to determine the type of data the variable is. A format
specifier is enclosed with "", and starts with '%' and ends with a letter (%d = integer, %f = float, %lf = long float (double), %s = string, %c = character, %lu = long unassigned int (usually used for things such as the size of a variable), %p = pointer (hexadecimal of memory location)). Below are examples of the usage of an int, float, and char:

```c
// PRINTING THE VARIABLES
printf("%d\n", num1);
printf("%f\n", num2);
printf("%c\n", character);

// PRINTING THE VARIABLES WITH OTHER TEXT
printf("The integer is: %d\n", num1);
printf("The float is: %f\n", num2);
printf("The character is: %c\n", character);

// PRINTING THE VARIABLES WITH OTHER VARIABLES
printf("The integer is: %d. While the float is %f.\n", num1, num2);
printf("The float is: %f. While the character is: %c\n", num2, character);
printf("The character is: %c. While the integer is: %d\n", character, num1);
```

## "%d" vs "%i"
Although both of these serve the same purpose of printing integers, "%d" is still more commonly used as it is an abbreviation for "decimal integers". The choice has become conventional over time, emphasizing its role in specifying base 10 integers within the C programming language.

# Conversion types
## Explicit conversion
Explicit conversions are done manually by the user before compilation when assigning a value to another data type. Example below:
```c
float x = (float) 9 / 6;
printf("%f", x)
```

## Implicit conversion
Implicit conversions are done automatically by the compiler when a value is assigned to another data type. Example below:
```c
float x = 9 / 6;
printf("%f", x)
```
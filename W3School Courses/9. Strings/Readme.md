# Strings in C
## Declaring a "string"
A "string" variable is not a type of variable present in the language C and does not have a library available via a header file. Instead, it is declared as a "character array" which literally means it is a character array that is made up of many characters referred to as "strings" by humans and other programming langauges. Instead of needing to seperately add each character into the array enclosed in braces (which can still be done), a string can still be auto-declared just be enclosing a line of text with double quotation marks. Below is an example:

```c
char string[] = "Hello World";
```

# String functions
## string.h
Although the variable string is not a thing in C, there are many functions that can be used to perform certain tasks with the strings (character arrays). In order to gain access to those functions, the string header file <string/h> needs to be imported into the C file.

## strlen()
strlen() returns the length of a string.

## sizeof()
sizeof() returns the size (in bytes) of a string.

## strcat()
strcat() concatenates (combines) 2 strings.

## strcpy()
strcpy() copies a string into another string.

## strcmp()
strcmp() compares 2 strings, if they are equal, it will return 0, otherwise a random number will be returned.

# Escape character (\)
## Description
The backslash (known as the escape character in programming) is used in a string to allow the compiler to perform certain tasks such as ignore characters it usually would not or to inlude someting in the string

## \'
\' tells the compiler to ignore the single quote so that it can be considered a character in the string.

## \"
\" tells the compiler to ignore the double quote so that it can be considered a character in the string.

## \\
\\ tells the compiler to ignore the backslash so that it can be considered a character in the string.

## \n
\n tells the compiler to add a new line in the string.

## \t
\t tells the compiler to add a tab in the string.

## \0
Depending on the concept, \0 will set the value to null (in short terms, it means "set to null").
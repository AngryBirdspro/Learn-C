# Introcution to arrays
## Arrays
An array in C is a list type that can only store elements of 1 data type.

## Declaring an array
Just like singular data types, you **must specify what kind of data types** it is going to store. The amount of elements does not have to be
specified in the brackets after the array because C can count them itself. Declaring an array without a list of elements is fine but 
then the amount of elements needed must be specified. Depending on the array type, if unspecified elements are returned, the value
according to the data type will be randomized. Specifically with a string, the randomized value will be an unreadable binary value
(similair to a compiled binary script that contains binary code that humans cannot read). Once an array with no specified elements is declared, you cannot assign an initializer list to it directly since the array technicaly already has one meaning it cannot be
re-assigned to another initializer list. In order to set the elements of an array with no specified elements, each element must be
individually assigned into the required index of the array.

## Printing an array
In order to print the elements of an array, you must specify the elemet/s you want. Directly printing the array will give you the memory location which will vary depend on if you format it as an integer/long-unidentified integer (translation of hexadecimal value into integer format), character (translation of hexadecimal value into character format which will only show as non-readable binary format), pointer (default hexadecimal format), or float (will just translate the hexadecimal value into 0.00000 ect).

## sizeof() function
In C, you can use sizeof() to get the size of an array measured in bytes, not to be confused of using that to get the number of 
elements in an array such as using len() on lists, tuples, and dictionaries in Python. Another thing to note, for example, in an
integer array, it doesn't matter how big one of the number values are, each element has the same amount of bytes.

## Multi-dimmensional array
A multi-dimmensional array is an array with arrays contained in it as its elements. The most common type, a 2D array, is also called a matrix. The first dimension represents the number of rows [2], while the second dimension represents the number of columns [3]. The values are placed in row-order, and can be visualized like this:. Below is an example:
```c
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
int matrix[/*Index in matrix*/][/*Index of element in array in matrix*/] = {{1, 4, 2}, {3, 6, 8}}
```
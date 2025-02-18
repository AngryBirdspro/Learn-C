# Enums in C
## What is an enum?
In C, an enum (enumeration meaning "specifically listed") is a special type that constants. Below is an example:
```c
enum Enumeration
{
    LOW,
    MEDIUM,
    MAX // A comma is not needed after the last value in an enum
}
```

## Enum values
By default, the first element in an enum holds a value of 0, the second holds a value of 1, the third 2, and so on. When a value is manually inserted into the first element, the elements after the first one will be updated accordingly, but each elements' value can be manually assigned. Below is an example:

```c
enum Enum
{
    FIRST = 98,
    SECOND, // The second one will now automatically be updated to 99
    THIRD // The third one will now automatically be updated to 100
}
```

## How are enums usually used
Enums are used to give variables a constant value to make the code easier to maintain and read, they are usually used with a switch statement to check for corresponding values.

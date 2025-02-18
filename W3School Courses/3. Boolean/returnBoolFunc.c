#include <stdio.h>
#include <stdbool.h>

const char* boolToString(bool value)
{
    return value ? "True" : "False";
}

int main()
{
    bool condition1 = 5 > 4;
    bool condition2 = 5 < 4;

    printf("Condition 1 is: %s\n", boolToString(condition1));
    printf("Condition 2 is: %s\n", boolToString(condition2));

    return 0;
}
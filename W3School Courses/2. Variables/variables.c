#include <stdio.h>
#include <string.h>

int main()
{
    // DECLARING VARIABLES
    int num1 = 1;
    float num2 = 1.1;
    char character = '&';

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

    // PRINTING THE VARIABLES WITH ITS SIZE
    printf("The integer is: %d. The size of this is %lu bytes.\n", num1, sizeof(num1));
    printf("The float is: %f. The size of this is %lu bytes.\n", num2, sizeof(num2));
    printf("The character is: %c. The size of this is %lu byte.\n", character, sizeof(character));
    
    return 0;
}
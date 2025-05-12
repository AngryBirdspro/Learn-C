#include <stdio.h>

float num1;
float num2;
int array[5];
int arrayIndex = 0;
int arrayElement;

// Defining the function to perform calculations
void calculator()
{
    printf("%f\n", num1 + num2);
    printf("%f\n", num1 - num2);
    printf("%f\n", num1 * num2);
    printf("%f\n", num1 / num2);
}

// Defining the function to loop through an array
void arrayLooper(int array[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
}

int main()
{
    // VOID FUNCTIONS (NO DIRECTLY RETURNED VALUE)
    // Getting the fist number
    printf("Enter the first number: ");
    scanf("%f", &num1);
    // Getting the second number
    printf("Enter the second number: ");
    scanf("%f", &num2);
    // Calculating the sum, difference, product and quotient of 2 numbers
    calculator();

    // Allowing the user to enter the integers themselves for the array
    while (arrayIndex < 5)
    {
        printf("Enter an integer then hit enter: ");
        scanf("%d", &arrayElement);
        array[arrayIndex] = arrayElement;
        arrayIndex++;
    };
    arrayLooper(array);

    return 0;
}

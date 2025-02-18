#include <stdio.h>

int main()
{
    // Used with first example
    int num;

    // Used with 2nd example
    int num2;
    char c;

    // Used with 3rd example
    char fullName[30];

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The number you typed is %d\n", num);

    printf("Enter a number AND character before hitting enter: ");
    scanf("%d\n %c\n", &num2, &c);

    printf("Your number is: %d\n", num2);
    printf("Your character is: %c\n", c);

    printf("Enter your full name: ");
    fgets(fullName, 30, stdin);
    printf("Hello, %s\n", fullName);

    return 0;
}

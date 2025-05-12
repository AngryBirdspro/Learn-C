#include <stdio.h>

int factorial(int num)
{
    while (num > 1)
    {
        return num * factorial(num - 1);
    }
    return num;
}

int main()
{
    int factorialNum;
    printf("Enter a number you want to find the factorial of: ");
    scanf("%d", &factorialNum);
    int result = factorial(factorialNum);
    printf("%d", result);

    return 0;
}

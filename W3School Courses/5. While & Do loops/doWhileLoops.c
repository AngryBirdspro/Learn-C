#include <stdio.h>
int main()
{
    int x = 0;
    while (x < 10)
    {
        printf("%d\n", x);
        x++;
    }

    int y = 0;
    do
    {
        printf("%d\n", y);
        y++;
    }   
    while (y < 10);
    return 0;
}
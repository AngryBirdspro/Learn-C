#include <stdio.h>
// OTHER THAN BEING USED TO BREAK OUT OF SWITCH BRANCHES, BREAK CAN ALSO BE USED IN FOR/WHILE/DO LOOPS

int main()
{
    // Breaks out of the loop after x reaches 4
    for (int x = 0; x < 10; x++)
    {
        if (x == 4)
        {
            break;
        }
        printf("%d\n", x);
    }

    // Continues the loop after x reaches 4
    for (int x = 0; x < 10; x++)
    {
        if (x == 4)
        {
            continue;
        }
        printf("%d\n", x);
    }

    return 0;
}
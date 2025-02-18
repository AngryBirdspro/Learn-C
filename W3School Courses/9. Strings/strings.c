#include <stdio.h>
#include <string.h>

int main()
{
    char msg[30] = "Hello World\n";
    char msg2[30] = "Hello World\n";
    char msg3[30] = "Hello world\n";

    printf("%s", msg);

    printf("%lu\n", strlen(msg));

    printf("%lu\n", sizeof(msg));

    strcat(msg, msg2);
    printf("%s", msg);

    strcpy(msg2, msg);
    printf("%s", msg2);

    printf("%d\n", strcmp(msg, msg2));
    printf("%d\n", strcmp(msg2, msg3));

    return 0;
}
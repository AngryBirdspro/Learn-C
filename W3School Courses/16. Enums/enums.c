#include <stdio.h>

enum batterLevel
{
    NONE = 0,
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75,
    MAX = 100
};

int main()
{
    // Basic usage of an enum
    enum batterLevel batteryLife = LOW;
    printf("%d\n", batteryLife);

    // The first enum used with a switch statement
    enum batterLevel currentBatteryLife;

    printf("Enter the current battery percentage of your device: ");
    scanf("%d", &currentBatteryLife);
    switch(currentBatteryLife)
    {
        case 0:
            printf("CHARGE YOUR DEVICE FOR GOD'S SAKE!!\n");
            break;
        case 25:
            printf("Are you the kind to leave everything to the last minute? Poor your device!\n");
            break;
        case 50:
            printf("Could be better, just get ready to charge your device when it tells you to\n");
            break;
        case 75:
            printf("Good job, you seem like a decent human!\n");
            break;
        case 100:
            printf("Thank you for taking such good care of your device!!\n");
            break;
        default:
            printf("Enter something valid please.\n");
            break;
    }

    return 0;
}

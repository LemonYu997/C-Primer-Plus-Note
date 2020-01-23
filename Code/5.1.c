#include <stdio.h>
#include <windows.h>
#define MIN_PER_HOUR 60

int main(void)
{
    int min;
    int hour;
    printf("Enter the time now in minute (<=0 to quit): ");
    scanf("%d", &min);
    while (min > 0)
    {
        hour = min / MIN_PER_HOUR;
        min = min % MIN_PER_HOUR;
        printf("Time is %d hour and %d minutes.\n", hour, min);
        printf("Enter another time in minute (<=0 to quit): ");
        scanf("%d", &min);
    }

    system("pause");
    return 0;
}
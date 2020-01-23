#include <stdio.h>
#include <windows.h>
#define DAY_PER_WEEK 7

int main(void)
{
    int week, day, date;
    printf("Enter days: ");
    scanf("%d", &day);
    week = day / DAY_PER_WEEK;
    date = day % DAY_PER_WEEK;
    printf("%d days are %d weeks, %d days.\n", day, week, date);

    system("pause");
    return 0;
}
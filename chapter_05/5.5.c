#include <stdio.h>
#include <windows.h>

int main(void)
{
    int days, count, sum;
    count = 0;
    sum = 0;
    printf("How many days did you work?\n");
    scanf("%d", &days);
    while (count++ < days)
        sum = sum + count;
    printf("You made $%d\n", sum);

    system("pause");
    return 0;
}
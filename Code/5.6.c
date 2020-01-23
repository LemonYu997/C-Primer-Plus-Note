#include <stdio.h>
#include <windows.h>

int main(void)
{
    int days, count, sum, num;
    count = 0;
    sum = 0;
    num = 1;
    printf("How many days did you work?\n");
    scanf("%d", &days);
    while (count++ < days)
    {
        num = count * count;
        sum += num;
    }
    printf("You made $%d\n", sum);

    system("pause");
    return 0;
}
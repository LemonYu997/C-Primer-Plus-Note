#include <stdio.h>
#include <windows.h>

int main(void)
{
    int min, max, sum;
    int i;
    sum = 0;

    printf("Enter lower and upper integer limits: ");
    while (scanf("%d %d", &min, &max) == 2)
    {   
        if (min < max)
        {
            for (i = min; i <= max; i++)
            {
                sum += i * i;
            }
            printf("The sums of the squares from %d to %d is %d.\n", min * min, max * max, sum);
            printf("Enter next set of limits: ");
        }
        else
            break;
        }
    printf("Done\n");

    system("pause");
    return 0;
}
#include <stdio.h>
#include <windows.h>

int main(void)
{
    int i, j, n;
    double sum1, sum2;

    printf("Enter times: ");
    scanf("%d", &n);                                        //n为计算的项数

    while (n > 0)
    {
        sum1 = sum2 = 0;
        for (i = 0; i < n; i++)                             //计算1+ 1/2 + 1/3 + 1/4 +...+ 1/n
        {
            sum1 += 1.0 / (i + 1.0);
        }
        for (i = 0; i < n; i++)                             //计算1 - 1/2 + 1/3 - 1/4 +...- 1/(2n) + 1/(2n+1)
        {
            if (i % 2 == 0)                                 //j为当前项的系数，当i为奇数时j=-1，i为偶数时j=-1
                j = 1;
            else
                j = -1;
            sum2 += j * 1.0 / (i + 1.0);
        }
        printf("The result is %f and %f.\n", sum1, sum2);
        printf("Enter another times: ");
        scanf("%d", &n);
    }
    printf("Done\n");

    system("pause");
    return 0;
}
#include <stdio.h>
#include <windows.h>
#define SIZE 2                                                  //二维数组的第一项

void copy_arr(double ar1[], double ar2[], int n, int m);

int main(void)
{
    double ar1[SIZE][5] =
        {
            {1.1, 1.2, 1.3, 1.4, 1.5},
            {2.1, 2.2, 2.3, 2.4, 2.5}
        };
    double ar2[SIZE][5];
    int i;

    for (i = 0; i < SIZE; i++)                                  //根据二维数组的第一项作为拷贝次数
        copy_arr(ar1[i], ar2[0], i, 5);

    system("pause");
    return 0;
}

void copy_arr(double ar1[], double ar2[], int n, int m)
{
    int i;

    for (i = 0; i < m; i++)
    {
        ar2[i] = ar1[i];
    }
    for (i = 0; i < m; i++)
    {
        printf("ar2[%d][%d] = %.2lf", n, i, ar2[i]);
        printf("\n");
    }
}
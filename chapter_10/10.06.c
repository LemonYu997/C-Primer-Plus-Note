#include <stdio.h>
#include <windows.h>

void sort(double ar[], int n);              //倒序输出

int main(void)
{
    double ar[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    sort(ar, 5);

    system("pause");
    return 0;
}

void sort(double ar[], int n)
{
    int i, k;
    double temp;

    if (n % 2 == 0)                                     //如果有复数个元素
    {
        for (i = 0; i < n / 2; i++)
        {
            temp = ar[i];
            ar[i] = ar[n - i - 1];                      //第一次循环（i = 0）： 初位元素 = 末位元素
            ar[n - i - 1] = temp;                       //调位
        }
        for (k = 0; k < n; k++)
            printf("array[%d] = %lf\n", k, ar[k]);
    }
    else
    {
        for (i = 0; i < ((int)(n / 2) + 1); i++)        //如果有单数个元素，向上取整，最中间数位置不变
        {
            temp = ar[i];
            ar[i] = ar[n - i - 1];
            ar[n - i - 1] = temp;
        }
        for (k = 0; k < n; k++)
            printf("array[%d] = %lf\n", k, ar[k]);
    }
}
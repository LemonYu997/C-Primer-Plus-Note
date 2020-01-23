#include <stdio.h>
#include <windows.h>
#define SIZE 8

int power2(int n);

int main(void)
{
    int num[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
        num[i] = power2(i);

    i = 0;
    do
    {
        printf("%d\n", num[i]);
        i++;
    } while (i < SIZE);

    system("pause");
    return 0;
}

int power2(int n)                           //从2的0次幂开始计算
{
    int i, ans;
    ans = 1;

    for (i = 0; i < n; i++)                 //若需要从2的1次幂开始计算，将i<n改为i<=n即可
        ans *= 2;

    return ans;
}
#include <stdio.h>
#include <windows.h>

int maxnum(int ar[], int n);

int main(void)
{
    int ar[] = {1, 2, 3, 4, 5};
    int mn;

    mn = maxnum(ar, 5);                         //不能用ar[],ar[] = *ar, ar = &ar[0],函数调用的是ar[]即*ar，所以需要输入一个地址
    printf("The max number is %d\n", mn);

    system("pause");
    return 0;
}

int maxnum(int ar[], int n)
{
    int i;
    int temp;

    for (i = 0; i < n - 1; i++)
    {
        if (ar[i + 1] > ar[i])
            temp = ar[i + 1];
        else
            temp = ar[i];
    }

    return temp;
}
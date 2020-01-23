#include <stdio.h>
#include <windows.h>

void copy(int ar1[], int ar2[], int ar3[], int n);
void show(int n, int ar[n]);

int main(void)
{
    int ar1[5] = {1, 2, 3, 4, 5};
    int ar2[5] = {6, 7, 8, 9, 10};
    int ar3[5];

    copy(ar1, ar2, ar3, 5);
    show(5, ar3);

    system("pause");
    return 0;
}

void copy(int ar1[], int ar2[], int ar3[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        ar3[i] = ar1[i] + ar2[i];
    }
}

void show(int n, int ar[n])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("ar3[%d] = %d\n", i, ar[i]);
    }
}
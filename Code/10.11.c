#include <stdio.h>
#include <windows.h>

void dou(int ar1[][5], int ar2[][5], int n);
void show(int m, int n, int ar[m][n]);

int main(void)
{
    int ar1[3][5] =
        {
            {1, 2, 3, 4, 5},
            {2, 3, 4, 5, 6},
            {3, 4, 5, 6, 7}
        };
    int ar2[3][5];

    dou(ar1, ar2, 3);
    show(3, 5, ar2);

    system("pause");
    return 0;
}

void dou(int ar1[][5], int ar2[][5], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
        {
            ar2[i][j] = ar1[i][j] * 2;
        }
    }
}

void show(int m, int n, int ar[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("ar2[%d][%d] = %d ", i, j, ar[i][j]);
        }
        printf("\n");
    }
}
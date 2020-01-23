#include <stdio.h>
#include <windows.h>

void copy(int m, int n, double ar1[m][n],double ar2[m][n]);
void show(int m, int n, double ar[m][n]);

int main(void)
{
    double ar1[3][5] =
        {
            {1.1, 1.2, 1.3, 1.4, 1.5},
            {2.1, 2.2, 2.3, 2.4, 2.5},
            {3.1, 3.2, 3.3, 3.4, 3.5}
        };
    double ar2[3][5];

    copy(3, 5, ar1, ar2);
    show(3, 5, ar2);

    system("pause");
    return 0;
}

void copy(int m, int n, double ar1[m][n],double ar2[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            ar2[i][j] = ar1[i][j];
        }
    }
}

void show(int m, int n, double ar[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("ar2[%d][%d] = %.2f ", i, j, ar[i][j]);
        }
        printf("\n");
    }
}
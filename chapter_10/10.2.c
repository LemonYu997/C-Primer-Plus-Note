#include <stdio.h>
#include <windows.h>
#define SIZE 5

void copy_arr(double ar[], double sou[], int n);
void copy_ptr(double *ar, double *sou, int n);
void copy_ptrs(double ar[], double *sou, double *end);

int main(void)
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[SIZE];
    double target2[SIZE];
    double target3[SIZE];

    copy_arr(target1, source, SIZE);
    copy_ptr(target2, source, SIZE);
    copy_ptrs(target3, source, source + 5);

    system("pause");
    return 0;
}

void copy_arr(double ar[], double sou[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        ar[i] = sou[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("target1[%d] = %.2lf", i, ar[i]);
        printf("\n");
    }
}

void copy_ptr(double *ar, double *sou, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        *(ar + i) = *(sou + i);
    }
    for (i = 0; i < n; i++)
    {
        printf("target1[%d] = %.2lf", i, ar[i]);
        printf("\n");
    }
}

void copy_ptrs(double ar[], double *sou, double *end)
{
    int i;
    while (sou <= end)
    {
        *ar = *sou;
        ar++;
        sou++;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("target1[%d] = %.2lf", i, ar[i]);
        printf("\n");
    }
}
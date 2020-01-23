#include <stdio.h>
#include <windows.h>

double dou(double x);
void transform(double *sou, double *tar, int num, double (*f)(double));

int main(void)
{
    double sou[10] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    double tar[10];
    int i;

    transform(sou, tar, 10, dou);
    for (i = 0; i < 10; i++)
        printf("tar[%d] = %.2f\n", i, tar[i]);

    system("pause");
    return 0;
}

double dou(double x)
{
    return x * 2;
}

void transform(double *sou, double *tar, int num, double (*f)(double))
{
    int i;

    for (i = 0; i < num; i++)
    {
        tar[i] = f(sou[i]);
    }
}
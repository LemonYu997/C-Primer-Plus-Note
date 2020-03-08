#include <stdio.h>
#include <windows.h>

double operation(double m, double n);

int main(void)
{
    double min, max;

    printf("Enter two floating poinr numbers: ");
    while (scanf("%lf %lf", &min, &max) == 2)
    {
        printf("The result is %f.\n", operation(min, max));
        printf("Enter next pair numbers: ");
    }
    printf("Done.\n");

    system("pause");
    return 0;
}

double operation(double m, double n)
{
    double a;

    a = (n - m) / (n * m);

    return a;
}
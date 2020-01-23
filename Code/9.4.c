#include <stdio.h>
#include <windows.h>

double harmonic(double x, double y);                //计算两数的调和平均数

int main(void)
{
    double x, y;

    printf("Enter two double numbers( != 0 ): ");
    scanf("%lf %lf", &x, &y);

    while (x == 0 || y == 0)
    {
        printf("you are error.Try again: \n");
        scanf("%lf %lf", &x, &y);
    }
    printf("Their harmonic average is %f.\n", harmonic(x, y));

    system("pause");
    return 0;
}

double harmonic(double x, double y)
{
    double a, b;

    a = 1 / x;
    b = 1 / y;
    return (1 / ((a + b) / 2));

}
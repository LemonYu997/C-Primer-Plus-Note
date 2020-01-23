#include <stdio.h>
#include <windows.h>

double power(double x, int y);

int main(void)
{
    double x;
    int y;

    printf("Enter a double number and exp:\n");
    scanf("%lf %d", &x, &y);

    printf("%.2f ^ %d = %.4f\n", x, y, power(x, y));

    system("pause");
    return 0;
}

double power(double x, int y)
{
    double pow = 1.0;
    int i;

    if (y < 0)
        pow = 1 / power(x, -y);
    else if (y > 0)
    {
        for (i = 0; i < y; i++)
            pow *= x;
    }
    else
        pow = 1;

    return pow;
}
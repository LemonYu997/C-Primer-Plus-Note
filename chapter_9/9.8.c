#include <stdio.h>
#include <windows.h>

double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power to which the number will be raised, Enter q to quit.\n");
    while (scanf("%lf %d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        if (x == 0)
            printf("Undefined!\n");
        printf("%.3f to the power %d is %.5f\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    system("pause");
    return 0;
}

double power(double n, int p)
{
    double pow = 1, pow1 = 1;
    int i;
    if (n == 0)
    {
        pow = 0;
    }
    else
    {
        if (p > 0)
        {
            for (i = 1; i <= p; i++)
                pow *= n;
        }
        else if (p < 0)
        {
            for (i = 1; i <= -p; i++)
                pow1 *= n;
            pow = 1 / pow1;
        }
        else
            pow = 1;
    }

    return pow;
}
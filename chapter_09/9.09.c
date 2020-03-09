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

double power(double n, int p)               //递归算法，内部循环调用函数
{
    double pow = 1, pow1 = 1;
    
    if (p > 0)
    {
        if (p > 1)
            pow = n * power(n, p - 1);
        else                                // p = 1
            pow = n;
    }
    else if (p < 0)
    {
        if (p < -1)
            pow1 = n * power(n, -p - 1);
        else                                // p = -1
            pow1 = n;
        pow = 1 / pow1;
    }
    else                                    // p = 0
        pow = 1;

    return pow;
}
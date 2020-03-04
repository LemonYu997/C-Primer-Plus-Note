//计算斐波那契数
#include <stdio.h>
#include <windows.h>

unsigned long Fibonacci(int n);

int main(void)
{
    int n;
    unsigned long fibo;

    printf("Enter the location of Fibonacci: ");
    scanf("%d", &n);
    fibo = Fibonacci(n);

    printf("The value is %ld\n", fibo);

    system("pause");
    return 0;
}

unsigned long Fibonacci(int n)
{
    int i, n1, n2, temp;

    if (n > 2)
    {
        for (n1 = 1, n2 = 1, i = 3; i <= n; i++)
        {
            temp = n1 + n2;
            n1 = n2;
            n2 = temp;
        }
    }
    else
        n2 = 1;

    return n2;
}
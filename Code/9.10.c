#include <stdio.h>
#include <windows.h>

void to_base_n(int n, int m);

int main(void)
{
    int number1, number2;
    printf("Enter two integers (q to quit): \n");
    while (scanf("%d %d", &number1, &number2) == 2)
    {
        printf("result: ");
        to_base_n(number1, number2);
        putchar('\n');
        printf("Enter two integers (q to quit): \n");
    }
    printf("Done.\n");

    system("pause");
    return 0;
}

void to_base_n(int n, int m)
{
    int r;

    r = n % m;
    if ((n / m) > 0)
        to_base_n(n / m, m);
    printf("%d", r);
}
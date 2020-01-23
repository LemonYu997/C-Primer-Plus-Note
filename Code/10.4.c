#include <stdio.h>
#include <windows.h>

int maxunder(double ar[], int n);

int main(void)
{
    double ar[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int n;

    n = maxunder(ar, 5);
    printf("The max number under number is %d\n", n);

    system("pause");
    return 0;
}

int maxunder(double ar[], int n)
{
    int i;
    int under;

    for (i = 0; i < n - 1; i++)
    {
        if (ar[i + 1] > ar[i])
            under = i + 1;
        else
            under = i;
    }

    return under;
}


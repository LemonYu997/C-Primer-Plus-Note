#include <stdio.h>
#include <windows.h>

double sub(double ar[], int n);

int main(void)
{
    double ar[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double s;

    s = sub(ar, 5);
    printf("The subtract number is %.2f\n", s);

    system("pause");
    return 0;
}

double sub(double ar[], int n)
{
    int i;
    double max, min;
    max = min = ar[0];

    for (i = 0; i < n; i++)
    {
        if (max < ar[i])
            max = ar[i];
        if (min > ar[i])
            min = ar[i];
    }

    return (max - min);
}
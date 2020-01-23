#include <stdio.h>
#include <windows.h>
#define RATE 0.08
int main(void)
{
    float base = 1000000.00;
    int years = 0;

    while (base > 0)
    {
        base += base * RATE;
        base -= 100000;
        years++;
        printf("%d years have %15.3f\n", years, base);
    }
    printf("%d years later you have no money in the bank.\n", years);

    system("pause");
    return 0;
}
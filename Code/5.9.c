#include <stdio.h>
#include <windows.h>

void Temperatures(float n);

int main(void)
{
    float hs;
    printf("Enter a temperature of fahrenheit(enter q to quit): ");
    while (scanf("%f", &hs) == 1)
    {
        Temperatures(hs);
        printf("Enter another temprature of fahrenheit(enter q to quit): ");
    }
    printf("Done.\n");

    system("pause");
    return 0;
}

void Temperatures(float n)
{
    float ss, ks;
    const float left = 32.0;
    const float add = 237.16;

    ss = 5.0 / 9.0 * (n - left);
    ks = n + add;
    printf("Fahrenheit: %.2f Celsius: %.2f Kelvin: %.2f \n", n, ss, ks);
}
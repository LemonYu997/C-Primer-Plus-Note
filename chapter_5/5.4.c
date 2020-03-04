#include <stdio.h>
#include <windows.h>
#define CENTIMETER_PER_FEET 30.48
#define CENTIMETER_PER_INCH 2.54
int main(void)
{
    float inch,height;
    int feet;
    printf("Enter a height in centimeters: ");
    scanf("%f", &height);
    while (height > 0)
    {
        feet = height / CENTIMETER_PER_FEET;
        inch = (height - feet * CENTIMETER_PER_FEET) / CENTIMETER_PER_INCH;
        printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inch);
        printf("Enter a height in centimeters: ");
        scanf("%f", &height);
    }

    system("pause");
    return 0;
}
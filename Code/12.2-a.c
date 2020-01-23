#include <stdio.h>

static int mode;                //加上static字段后，该变量作用域仅限本文件  (内部链接)
static float distance;
static float fuel;

void set_mode(int n)
{
    if (n == 0 || n == 1)
        mode = n;
    else
        printf("Invalid mode specified. Mode %s used.\n", mode == 0 ? "0(metric)" : "1(US)");
}

void get_info(void)
{
    if (mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%f", &distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%f", &fuel);
    }
    else if (mode == 1)
    {
        printf("Enter distance traveled in miles: ");
        scanf("%f", &distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%f", &fuel);
    }
}

void show_info(void)
{
    if (mode == 0)
        printf("Fuel consumption is %.2f liters per 100km.\n", fuel / (distance / 100));
    else if (mode == 1)
        printf("Fuel consumption is %.1f miles per gallon.\n", distance / fuel);
}
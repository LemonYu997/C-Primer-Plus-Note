#include <stdio.h>
#include <windows.h>

void get_info(int mode, float *distancead, float * fuelad);
void show_info(int mode, float *distancead, float * fuelad);

int main(void)
{
    int mode = 0;
    int temp;
    float distance = 0;
    float fuel = 0;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while (mode >= 0)
    {
        if (mode != 0 && mode != 1)
        {
            printf("Invalid mode specified. Mode %s used.\n", mode == 0 ? "0(metric)" : "1(US)");
            mode = temp;
        }
            
        get_info(mode, &distance, &fuel);                           //输入地址
        show_info(mode, &distance, &fuel);
        temp = mode;

        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done.\n");
    
    system("pause");
    return 0;
}


void get_info(int mode, float *distancead, float * fuelad)              //用*解地址
{
    if (mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%f", distancead);                                      //将数据存入地址中
        printf("Enter fuel consumed in liters: ");
        scanf("%f", fuelad);
    }
    else if (mode == 1)
    {
        printf("Enter distance traveled in miles: ");
        scanf("%f", distancead);
        printf("Enter fuel consumed in gallons: ");
        scanf("%f", fuelad);
    }
}

void show_info(int mode, float *distancead, float * fuelad)
{
    if (mode == 0)
        printf("Fuel consumption is %.2f liters per 100km.\n", *fuelad / (*distancead / 100));
    else if (mode == 1)
        printf("Fuel consumption is %.1f miles per gallon.\n", *distancead / *fuelad);
}
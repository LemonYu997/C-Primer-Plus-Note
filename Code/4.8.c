#include <stdio.h>
#include <windows.h>
#define LITRE_PER_GALLON 3.785      //每加仑3.785升
#define KM_PER_MILE 1.609           //每英里1.609千米

int main(void)
{
    float mileage;                  //里程数（千米）
    float gasoline;                 //消耗的汽油量（升）
    float mile_per_gallon;          //英里/加仑
    float litre_per_hunded_km;      //升/100公里
    printf("Enter the mileage:");
    scanf("%f", &mileage);
    printf("Enter the gasoline:");
    scanf("%f", &gasoline);
    mile_per_gallon = (mileage / KM_PER_MILE) / (gasoline / LITRE_PER_GALLON);
    litre_per_hunded_km = gasoline / mileage * 100;
    printf("Miles per gallom is: %.1f\n", mile_per_gallon);
    printf("Litre per hundred is: %.1f\n", litre_per_hunded_km);

    system("pause");
    return 0;
}
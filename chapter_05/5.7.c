#include <stdio.h>
#include <windows.h>

double cube(double n);

int main(void)
{
    double num;
    printf("Enter a double number: ");
    scanf("%lf", &num);                     //double类型读入要用%lf,输出用%f
    cube(num);

    system("pause");
    return 0;
}

double cube(double n)
{
    n = n * n * n;
    printf("Cube is %f\n", n);

    return n;
}
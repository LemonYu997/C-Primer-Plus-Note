#include <stdio.h>
#include <windows.h>

void putnum(double *a, double *b, double *c);       //*a,*b,*c分别存放最小值，中间值，最大值          

int main(void)
{
    double x, y, z;
    printf("Enter three double numbers: ");
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("Now x = %f, y = %f, z = %f.\n", x, y, z);

    putnum(&x, &y, &z);
    printf("Now x = %f, y = %f, z = %f.\n", x, y, z);

    system("pause");
    return 0;
}

void putnum(double *a, double *b, double *c)
{
    double temp;

    if (*a > *b)            //如果x大于y，则交换x和y，使x较小
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c)            //如果x大于z，则交换x和z，此时x最小
    {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c)            //如果y大于z，则交换y和z，此时y较小，x<y<z
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

#include <stdio.h>
#include <windows.h>

void larger_of(double *a, double *b);           //a和b为两个地址变量，*a和*b表示a和b地址中的数

int main(void)
{
    double x, y;

    printf("Enter two double numbers: ");
    scanf("%lf %lf", &x, &y);

    larger_of(&x, &y);                          //运算对象为x和y的地址
    printf("Now two number is %f nad %f.\n", x, y);

    system("pause");
    return 0;
}

void larger_of(double *a, double *b)
{   
    (*a > *b) ? (*b = *a) : (*a = *b);          //a和b地址中的数据（这里时x和y）相比，如果 a地址中的数据比 b地址中的大，则 b地址中的数据等于 a地址中的数据，否则 a地址中的数据等于 b地址中的数据
}                                               //从始至终x和y两个数据的地址没有改变，只改变了地址中的数据，即x和y本身。
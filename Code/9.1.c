#include <stdio.h>
//#include <windows.h>              使用windows.h头文件时无法自设min函数，需将min改名字

double min(double x, double y);

int main(void)
{
    double x, y;
    printf("Enter two double numbers: \n");
    scanf("%lf %lf", &x, &y);

    printf("The minimum number is %f\n", min(x, y));

    fflush(stdin);                  //清除键盘缓存
    getchar();                      //需要敲击以下键盘才会关闭cmd
    //system("pause");
    return 0;
}

double min(double x, double y)
{
    //return((a > b)? b: a)         程序更简洁
    if (x > y)
        return y;
    else
        return x;
}
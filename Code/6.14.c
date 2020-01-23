#include <stdio.h>
#include <windows.h>
#define SIZE 8

int main(void)
{
    double num1[SIZE], num2[SIZE];
    int i, j;
    double sum;

    printf("Enter %d double numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++)
        scanf("%lf", &num1[i]);  
    
    for (i = 0; i < SIZE; i++)
    {
        sum = 0;                                //求累加时注意初始化的位置！！
        for (j = 0; j <= i; j++)
            sum += num1[j];
        num2[i] = sum;
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%15f", num1[i]);
    }
    printf("\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%15f", num2[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
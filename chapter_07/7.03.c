#include <stdio.h>
#include <windows.h>

int main(void)
{
    int n, odd_num = 0, even_num = 0;
    double odd_averagenum, even_averagenum;
    int odd_sum = 0, even_sum = 0;

    printf("Enter integers(0 to quit):\n");
    while ((scanf("%d", &n) == 1) && (n != 0))                              //输入一个整数且这个整数不为0
    {
        if (n % 2 == 0)
        {
            even_num++;                                                     //0不在其中
            even_sum += n;
        }
        else
        {
            odd_num++;
            odd_sum += n;
        }
    }
    printf("over.\n");

    printf("even numbers: %d.\n", even_num);
    if (even_num > 0)                                                       //防止个数为0计算平均数时出现错误，下同
    {
        even_averagenum = even_sum / even_num;
        printf("even average number: %.2f.\n", even_averagenum);
    }

    printf("odd numbers: %d.\n", odd_num);
    if (odd_num > 0)
    {
        odd_averagenum = odd_sum / odd_num;
        printf("odd average number: %.2f.\n", odd_averagenum);
    }

    system("pause");
    return 0;
}
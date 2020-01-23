#include <stdio.h>
#include <windows.h>

void input(int m, int n, double ar[m][n]);              //提醒输入
double aver_per(int n, double ar[]);                    //计算一行的平均值
double aver(int m, int n, double ar[m][n]);             //计算总的平均值
double maxnum(int m, int n, double ar[m][n]);           //计算最大值

int main(void)
{
    double ar[3][5];
    double aver_p[3];                                   //用来存放3行的平均值
    double average;                                     //总的平均值
    double max;                                         //最大值
    int i;

    input(3, 5, ar);

    for (i = 0; i < 3; i++)                             //循环计算每一行的平均值
    {
       aver_p[i] = aver_per(5, ar[i]);
    }

    average = aver(3, 5, ar);
    max = maxnum(3, 5, ar);

    for (i = 0; i < 3; i++)                             //循环打印每一行的平均值
    {
        printf("The %d group average number is %.2f\n", i, aver_p[i]);
    }

    printf("The total average number is %.2f\n", average);
    printf("The max number is %.2f\n", max);

    system("pause");
    return 0;
}

void input(int m, int n, double ar[m][n])
{
    int i, j;
    printf("Enter %d * %d array:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &ar[i][j]);
        }
    }
}

double aver_per(int n, double ar[])
{
    double average_per;
    int i;
    double sum = 0.0;

    for (i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    average_per = sum / n;

    return average_per;
}

double aver(int m, int n, double ar[m][n])
{
    double average;
    int i, j;
    double sum = 0.0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum += ar[i][j];
        }
    }
    
    average = sum / (m * n);

    return average;
}

double maxnum(int m, int n, double ar[m][n])
{
    double max;
    int i, j;

    max = ar[0][0];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (ar[i][j] > max)
                max = ar[i][j];
        }
    }

    return max;
}


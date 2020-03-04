#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define SIZE 1000

int main(void)
{
    int ar[SIZE];
    int i, j;
    int num[10][10] = {0};

    for (i = 0; i < 10; i++)                        //用10个不同的种子运行
    {
        srand((int)time(0) + i);             
        for (j = 0; j < SIZE; j++)
        {
            ar[j] = (rand() % 10 + 1);
            num[i][ar[j] - 1]++;                   //计数，将1~10出现的次数放在num[i][0]~num[i][9]中
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("NO.%d array:\n", i + 1);
        for (j = 0; j < 10; j++)
        {
            printf("%d: %5d\n", j + 1, num[i][j]);
        }
    }

    system("pause");
    return 0;
}
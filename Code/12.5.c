#include <stdio.h>
#include <stdlib.h>             //使用srand()函数
#include <time.h>
#define SIZE 100

void sort(int *ar);

int main(void)
{
    int ar[SIZE];
    int i;

    srand( (int) time(0));                                  //将time作为随机种子

    for (i = 0; i < SIZE; i++)
        ar[i] = (rand() % 10 + 1);                          //数组中的每个元素均为 1~10

    printf("The numbers are:\n");
    for (i = 0; i < SIZE; i++)
        printf("%d ", ar[i]);

    sort(ar);
    printf("\nNow the numbers are:\n");
    for (i = 0; i < SIZE; i++)
        printf("%d ", ar[i]);

    printf("\n");
    system("pause");
    return 0;
}

void sort(int *ar)
{
    int temp;
    int i, j;

    for (i = 0; i < SIZE; i++)                              //将一个数与后边所有数进行比较
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (ar[i] < ar[j])                              //比较相邻的两个数，将大的数放在前面
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }    
        }
    }
}
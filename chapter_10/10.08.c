#include <stdio.h>
#include <windows.h>

void copy_arr(double ar1[], double ar2[], int n);

int main(void)
{
    double ar1[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    double ar2[6];
    int n = 2;
    int i;
    
    copy_arr(&ar1[n], &ar2[n], 3);                      //从第三个元素开始，拷贝三个元素

    for (i = 0; i < 6; i++)
    {
        printf("ar2[%d] = %.2lf", i, ar2[i]);
        printf("\n");
    }

    system("pause");
    return 0;
}



void copy_arr(double ar1[], double ar2[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        ar2[i] = ar1[i];
    }
}
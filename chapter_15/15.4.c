#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int bit(int num, int n);

int main(void)
{
    int num;
    int n;
    int b;

    printf("Enter an int number:\n");
    scanf("%d", &num);
    printf("Enter the number of bit you want to open(0 < n < 8):\n");
    scanf("%d", &n);

    b = bit(num, n);

    printf("This bit is %d.\n", b);

    system("pause");
    return 0;
}

int bit(int num, int n)
{
    return ((num >> (n -1) ) & 1);
}

/*
num = 53 = 00110101, n = 5
(00110101 >> (5 - 1)) & 00000001 = 00000011 & 00000001 = 1
*/

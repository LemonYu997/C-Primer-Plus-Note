#include <stdio.h>
#include <windows.h>

int open(unsigned int num);

int main(void)
{
    int num;
    int n;

    printf("Enter an int number:\n");
    scanf("%d", &num);
    getchar();

    n = open(num);
    printf("The number of %d's open is %d.\n", num, n);

    system("pause");
    return 0;
}

int open(unsigned int num)
{
    int n = 0;

    while (num)
    {
        n += (num & 1);
        num >>= 1;
    }

    return n;
}

/*
num = 53 = 00110101
num = 00110101      n = 0 + (00110101 & 00000001) = 0 + 1 = 1           num = 00110101 >> 1 = 00011010
num = 00011010      n = 1 + (00011010 & 00000001) = 1 + 0 = 1           num = 00011010 >> 1 = 00001101
num = 00001101      n = 1 + (00001101 & 00000001) = 1 + 1 = 2           num = 00001101 >> 1 = 00000110
num = 00000110      n = 2 + (00000110 & 00000001) = 2 + 0 = 2           num = 00000110 >> 1 = 00000011
num = 00000011      n = 2 + (00000011 & 00000001) = 2 + 1 = 3           num = 00000011 >> 1 = 00000001
num = 00000001      n = 3 + (00000001 & 00000001) = 3 + 1 = 4           num = 00000001 >> 1 = 00000000
*/
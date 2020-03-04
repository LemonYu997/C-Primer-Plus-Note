//字符串转整数
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
#define SIZE 40

int atoi1(char *st);

int main(void)
{
    char st[SIZE];

    printf("Enter a string with num:\n");
    gets(st);

    printf("%d\n", atoi1(st));

    system("pause");
    return 0;
}

int atoi1(char *st)
{
    int i;
    int len;
    int num = 0;
    len = strlen(st);

    for (i = 0; i < len; i++)
    {
        if (isdigit(st[i]))
        {
            num += ((st[i] - '0') * pow(10, (len - i -1)));
        }
        else
            return 0;
    }
    return num;
}
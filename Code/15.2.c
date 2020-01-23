#include <stdio.h>
#include <stdlib.h>

int ten(char *pbin);
void pbit(unsigned int num);

int main(int argc, char * argv[])
{
    unsigned int num1, num2;                    //使用无符号数     

    if (argc != 3)
    {
        printf("You error.\n");
        exit(EXIT_FAILURE);
    }

    num1 = ten(argv[1]);
    num2 = ten(argv[2]);

    printf("%d %d\n", num1, num2);

    printf("~%s == ", argv[1]);
    pbit(~num1);
    printf("\n");

    printf("~%s == ", argv[2]);
    pbit(~num2);
    printf("\n");

    printf("%s & %s == ", argv[1], argv[2]);
    pbit(num1 & num2);
    printf("\n");

    printf("%s ^ %s == ", argv[1], argv[2]);
    pbit(num1 ^ num2);
    printf("\n");

    return 0;
}

int ten(char *pbin)
{
    int num = 0;
    int i;

    for (i = 0; pbin[i]; i++)           
    {
        num <<= 1;                                           
        num |= (pbin[i] - '0');         
    }

    return num;
}

void pbit(unsigned int num)             
{
    int len = 8;
    char binary[len];
    int i = 0;

    while (i < len)
    {
        (num % 2) ? (binary[i++] = '1') : (binary[i++] = '0');
        num /= 2;
    }

    for (i = len - 1; i >= 0; i--)
        printf("%c", binary[i]);
}

/*
终端运行：
.\15.2.exe 11011101 00110011
输出结果：
221 51
~11011101 == 00100010
~00110011 == 11001100
11011101 & 00110011 == 00010001
11011101 ^ 00110011 == 11101110
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#define SIZE 40

void s_gets(char st[]);

int main(void)
{
    char st[SIZE];

    printf("Enter a string:\n");
    s_gets(st);

    puts(st);

    system("pause");
    return 0;
}

void s_gets(char st[])
{
    int i = 0;
    int j;
 
    while(isspace(st[i] = getchar()))                   //如果起始输入的是空白，继续读取，即若st[0]为空白，则不断将输入放在st[0]中，直到一个不为空白的字符出现
        continue;

    for(j = 1; j < SIZE - 1; j++)                       //将不为空白的第一个字符放在st[1]中
    {
        st[j] = getchar();
        if(isspace(st[j]))
        {
            st[j] = '\0';
            break;
        }
    }
}
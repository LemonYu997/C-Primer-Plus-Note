#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>                      //判断空格
#define SIZE 40

void *despace(char *st);

int main(void)
{
    char st[SIZE];

    printf("Enter a string(\\n to quit):\n");
    gets(st);
    while (*st != '\0')                             
    {
        despace(st);
        puts(st);

        printf("Again, Enter a string(\\n to quit):\n");
        gets(st);
    }

    system("pause");
    return 0;
}

void *despace(char *st)
{
    char *temp = st;                            //初始化指针数组                           
    int i;
    int j = 0;

    for (i = 0; i < strlen(st); i++)
    {
        if (isspace(st[i]) == 0)                //如果不是空白，将st[i]中的字符放入stc[j]中
        {
            temp[j] = st[i];
            j++;
        }                        
    }
    temp[j] = '\0';                             //在stc[j]末尾加上结尾符

    st = temp;                                  //更新字符串
}
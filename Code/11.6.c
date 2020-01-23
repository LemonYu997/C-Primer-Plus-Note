#include <stdio.h>
#include <string.h>
#include <windows.h>
#define SIZE 40

int is_within(char ch, char *st);

int main(void)
{
    char st[SIZE];
    char ch;

    printf("Enter a string:\n");
    fgets(st, SIZE, stdin);

    printf("Enter a character you want to search(# to quit):\n");
    while ((scanf("%c", &ch)) && ch != '#')
    {
        getchar();                                          //scanf()不接受回车,要考虑缓冲区问题，否则相当于将ch和'\n'进行两次判断                                        

        if (is_within(ch, st))
            printf("Find it.\n");
        else
            printf("Can't find.\n");
        
        printf("Enter another character you want to search(# to quit):\n");
    }

    system("pause");
    return 0;
}

int is_within(char ch, char * st)
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        if (st[i] == ch)
        {
            return 1;
            break;
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <windows.h>
#define SIZE 40

char *sort(char *st);

int main(void)
{
    char st[SIZE];

    printf("Enter a string:\n");
    gets(st);
    while(*st != 'q')
    {
        sort(st);
        puts(st);

        printf("Again, Enter a string(q to quit):\n");
        gets(st);
    }

    system("pause");
    return 0;
}

char *sort(char *st)
{
    char temp;
    int len;
    int i;
    len = strlen(st);

    for (i = 0; i < len / 2; i++)
    {
        temp = st[i];
        st[i] = st[len - i - 1];
        st[len - i - 1] = temp;
    }

    return st;
}
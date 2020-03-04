#include <stdio.h>
#include <windows.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
    char ch;

    while ((ch = get_first()) != EOF)
        putchar(ch);

    system("pause");
    return 0;
}

char get_first(void)
{
    int ch;

    ch = getchar();

    while (isblank(ch));

    while (getchar() != '\n');

    return ch;
}
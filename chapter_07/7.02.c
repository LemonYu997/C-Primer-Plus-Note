#include <stdio.h>
#include <windows.h>
#define LINE 8

int main(void)
{
    char ch;
    int num = 0;

    printf("Enter a string:\n");
    while ((ch = getchar()) != '#')
    {
        printf("%c: %d ", ch, ch);
        num++;
        if (num % LINE == 0)
            printf("\n");
    }
    printf("\n");

    system("pause");
    return 0;
}
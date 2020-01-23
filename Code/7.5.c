#include <stdio.h>
#include <windows.h>

int main(void)
{
    char ch;
    int i = 0, j = 0;

    while ((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case '.':
                putchar('!');
                i++;
                break;
            case '!':
                putchar('!');
                putchar('!');
                j++;
                break;
            default:
                putchar(ch);
        }
    }
    putchar('\n');

    printf("The times of '.' replaced is %d.\n", i);
    printf("The times of '!' replaced is %d.\n", j);

    system("pause");
    return 0;
}
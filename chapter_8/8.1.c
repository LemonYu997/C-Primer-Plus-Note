#include <stdio.h>
#include <windows.h>

int main(void)
{
    char ch;
    int i = 0;

    while ((ch = getchar()) != EOF)
    {
        i++;
    }

    printf("You enter %d characters.\n", i);

    system("pause");
    return 0;
}
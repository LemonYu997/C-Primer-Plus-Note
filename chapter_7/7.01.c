#include <stdio.h>
#include <windows.h>

int main(void)
{
    char ch;
    int spacenum = 0, enternum = 0, othernum = 0;

    printf("Enter a string: ");

    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            spacenum++;
        else if (ch == '\n')
            enternum++;
        else
            othernum++;
    }
    printf("spacenum: %d, enternum: %d, othernum: %d.\n", spacenum, enternum, othernum);

    system("pause");
    return 0;
}
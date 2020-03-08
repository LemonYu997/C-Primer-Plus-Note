#include <stdio.h>
#include <windows.h>
#include <ctype.h>

void letter(void);

int main(void)
{
    letter();

    system("pause");
    return 0;
}

void letter(void)
{
    char let;
    int num;

    printf("Enter some words:\n");

    while ((let = getchar()) != EOF)
    {
        if (isalpha(let))
        {
            num = tolower(let) - 'a' + 1;
            putchar(let);
            printf(" is a letter, and ir is at %d seat.\n", num);
        }
        else
        {
            if (let == '\n')
            {
                printf("\\n is not a letter.\n");
            }
            else
            {
                putchar(let);
                printf(" is not a letter.\n");
            }
        }
    }
}
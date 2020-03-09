#include <stdio.h>
#include <windows.h>

void chline(char ch, int i, int j);                                 //打印指定的字符j行i列

int main(void)
{
    char ch;
    int i, j;

    printf("Enter the char: ");
    scanf("%s", &ch);

    printf("Enter two numbers for lines and rows: ");
    scanf("%d %d", &i, &j);

    chline(ch, i, j);

    system("pause");
    return 0;
}

void chline(char ch, int i, int j)
{
    int a, b;

    for (a = 0; a < j; a++)
    {
        for (b = 0; b < i; b++)
            printf("%c", ch);
        printf("\n");
    }
}
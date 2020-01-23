#include <stdio.h>
#include <windows.h>

void pr(char ch, int n, int row);

int main(void)
{
    char ch;
    int n, row;                                     //一行打印的个数和行数
    printf("Enter a char do you want to print: ");
    scanf("%c", &ch);

    printf("Enter two int numbers: ");
    scanf("%d %d", &n, &row);

    pr(ch, n, row);

    system("pause");
    return 0;
}

void pr(char ch, int n, int row)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < n; j++)
            printf("%c", ch);
        printf("\n");
    }
}
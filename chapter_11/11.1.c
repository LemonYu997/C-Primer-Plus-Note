#include <stdio.h>
#include <windows.h>
#include <string.h>
#define SIZE 40

void s_get(char st[], int n);

int main(void)
{
    int i;
    int num;
    char st[SIZE];

    printf("Enter a number for the length of string:\n");
    scanf("%d", &num);

    while (getchar() != '\n')               //读取但不储存输入，包括\n
        continue;

    s_get(st, num);
    printf("\n");

    for (i = 0; i < num; i++)
    {
        printf("%d\n", st[i]);
    }

    system("pause");
    return 0;
}

void s_get(char st[], int n)
{
    printf("Enter a string:\n");
    fgets(st, n, stdin);
}
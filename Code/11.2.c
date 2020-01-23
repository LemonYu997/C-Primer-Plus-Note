#include <stdio.h>
#include <windows.h>
#include <ctype.h>
#define SIZE 40

void s_gets(char st[], int n);

int main(void)
{
    int i;
    int num;
    char st[SIZE];

    printf("Enter a number for the length of the string:\n");
    scanf("%d", &num);

    while (getchar() != '\n')
        continue;
    s_gets(st, num);

    puts(st);
    printf("\n");

    for (i = 0; i < num; i++)
    {
        printf("%d\n", st[i]);
    }

    system("pause");
    return 0;
}

void s_gets(char st[], int n)
{
    int i;
    printf("Enter a string:\n");
    for (i = 0; i < n; i++)
    {
        st[i] = getchar();
        if (isspace(st[i]))
        {
            st[i] = '\0';
            break;
        }
    }
}
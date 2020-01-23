#include <stdio.h>
#include <string.h>
#include <windows.h>
#define SIZE 100

char *search(char *st, char ch);

int main(void)
{
    char st[SIZE];
    char ch;                                                            //目标字符
    char *ans;

    printf("Enter a string:\n");
    fgets(st, SIZE, stdin);
    printf("Enter a character you want to search:\n");
    scanf("%c", &ch);
    ans = search(st, ch);

    if (ans == NULL)
        printf("Can't find.\n");
    else
        printf("The %c is of st[%lld].\n", ch, ans - st);               //字符所在的地址减去首元素地址

    system("pause");
    return 0;
}

char *search(char *st, char ch)
{
    char *ans;
    int i;
    int len;

    len = strlen(st);

    for (i = 0; i < len; i++)
    {
        if (st[i] == ch)
        {
            ans = &st[i];
            return ans;
        }
    }
    return NULL;
}

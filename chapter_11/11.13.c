#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#define SIZE 40

void sort(char *st, int n);
void sortword(char *st);

int main(void)
{
    char st[SIZE];
    int len;

    printf("Enter a string:\n");
    gets(st);
    len = strlen(st);

    sort(st, len);
    sortword(st);

    puts(st);

    system("pause");
    return 0;
}

void sort(char *st, int n)
{
    char temp;
    int i;

    for (i = 0; i < n / 2; i++)
    {
        temp = st[i];
        st[i] = st[n - i - 1];
        st[n - i - 1] = temp;
    }
}

void sortword(char *st)
{
    char temp;
    int i;
    int len = 0;

    do                                                      //采用do循环是为了放置*st++最后的'\0'前的字母没有倒序
    {
        if (isalpha(*st))
            len++;
        else
        {
            if (len > 1)
            {
                for (i = 0; i < len / 2; i++)
                {
                    temp = *(st - 1 - i);
                    *(st - 1 - i) = *(st - len + i);
                    *(st - len + i) = temp;
                }
            }
            len = 0;
        }
    } while (*st++ != '\0');
}
#include <stdio.h>
#include <string.h>
#include <windows.h>
#define SIZE 40

char *string_in(char *s1, char *s2);

int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    char *ans;

    printf("Enter first string:\n");
    gets(s1);

    while (*s1 != '#')
    {
        printf("Enter second string you want in the fist string:\n");
        gets(s2);

        ans = string_in(s1, s2);
        if (ans)
            printf("Find it, at s1[%lld].\n", ans - s1);
        else
            printf("Can't find.\n");
            
        printf("Again, Enter first string(# to quit):\n");
        gets(s1);
    }

    system("pause");
    return 0;
}

char *string_in(char *s1, char *s2)
{
    int i;
    int len1, len2, len;

    len1 = strlen(s1);
    len2 = strlen(s2);
    len = len1 - len2 - 1;

    for (i = 0; i < len; i++)
    {
        if (strncmp(s1 + i, s2, len2) == 0)             //比较字符串中的字符，直到发现不同的字符为止。比较s1+i和s2，当s1+i和s2存在长度为len2的相同字符串时，strncmp()值为0
            return (s1 + i);
    }
    return NULL;
}
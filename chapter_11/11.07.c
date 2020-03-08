#include <stdio.h>
#include <string.h>
#include <windows.h>
#define SIZE 40

char *mystrncpy(char *s1, char *s2, int n);

int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    int len;
    
    printf("Enter first string:\n");
    gets(s1);

    while (*s1 != '#')
    {
        printf("Enter second string:\n");
        gets(s2);
        printf("Enter length of copy:\n");
        scanf("%d", &len);
        getchar();

        mystrncpy(s1, s2, len);
        printf("Now s1:\n");
        puts(s1);

        printf("Again, Enter first string(# to quit):\n");
        gets(s1);    
    }

    system("pause");
    return 0;
}

char *mystrncpy(char *s1, char *s2, int n)
{
    int i, len;

    len = strlen(s1);
    for (i = 0; i < n; i++)
    {
        s1[len + i] = s2[i];
    }

    return s1;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#define SIZE 40

void print_o(char **p, int n);
void print_ascii(char **p, int n);
void print_add(char **p, int n);
void print_firstlen(char **p, int n);
int firstlen(char *p);

int main(void)
{
    char st[10][SIZE];
    char *p[10];
    char ch;
    int n;

    printf("Enter 10 strings:\n");

    for (n = 0; n < 10; n++)
    {   
        if(gets(st[n]) == NULL)
            break;
        p[n] = st[n];
    }
    printf("\n");
    printf("**********************************\n");
    printf("Please choice:\n");
    printf(" a. print source string\n");
    printf(" b. print in order by ascii\n");
    printf(" c. print in order by string's length\n");
    printf(" d. print in order by first word's length\n");
    printf(" q. quit\n");
    printf("**********************************\n");
    printf("\n");

    while ((scanf("%c", &ch)) == 1 && ch != 'q')
    {
        getchar();                                                  //吞回车
        printf("\n");

        switch(ch)
        {
            case 'a':
                print_o(p, n);
                break;
            case 'b':
                print_ascii(p, n);
                break;
            case 'c':
                print_add(p, n);
                break;
            case 'd':
                print_firstlen(p, n);
                break;
            default:
                printf("You error, please enter a to d (or q to quit):\n");
        }
        printf("\n");
        printf("**********************************\n");
        printf("Please choice:\n");
        printf(" a. print source string\n");
        printf(" b. print in order by ascii\n");
        printf(" c. print in order by string's length\n");
        printf(" d. print in order by first word's length\n");
        printf(" q. quit\n");
        printf("**********************************\n");
        printf("\n");
    }
    printf("Done\n");

    system("pause");
    return 0;
}

void print_o(char **p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        puts(p[i]);
    }
}

void print_ascii(char **p, int n)
{
    int i, j;
    char *temp;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(p[j], p[j + 1]) > 0)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }                
        }
    }

    print_o(p, n);
}

void print_add(char **p, int n)
{
    int i, j;
    char *temp;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strlen(p[j]) > strlen(p[j + 1]))
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    print_o(p, n);
}

void print_firstlen(char **p, int n)
{
    int i, j;
    char *temp;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (firstlen(p[j]) > firstlen(p[j + 1]))
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    print_o(p, n);
}

int firstlen(char *p)
{
    int i;

    for (i = 0; !isalpha(*p); p++)
    {
        if (*p == '\0')
            return 0;
    }

    for (i = 1; isalpha(p[i]); i++)
        continue;
    return i;
}
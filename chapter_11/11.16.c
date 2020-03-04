#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 40

int main(int argc, char *argv[])
{
    char st[SIZE];
    int i;
    int len;

    printf("Enter a string:\n");
    gets(st);
    len = strlen(st);

    if (argv[1][0] == '-')
    {
        if (argv[1][1] == 'p')
        {
            puts(st);
        }
        else if (argv[1][1] == 'u')
        {
            for (i = 0; i < len; i++)
                st[i] = toupper(st[i]);
            puts(st);
        }
        else if (argv[1][1] == 'l')
        {
            for (i = 0; i < len; i++)
                st[i] = tolower(st[i]);
            puts(st);
        }
        else
            printf("Please enter \"-p\", \"-u\", \"-l\". \n");
    }

    return 0;
}


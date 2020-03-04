#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define SIZE 40

int main(void)
{
    int ch;
    FILE *fp;
    unsigned long count = 0;
    char name[SIZE];

    printf("Enter your name:\n");
    scanf("%s", name);

    if ((fp = fopen(name, "r")) == NULL)
    {
        printf("Can't open %s\n", name);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", name, count);

    system("pause");
    return 0;
}
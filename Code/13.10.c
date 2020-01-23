#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define SIZE 40

int main(void)
{
    FILE *fp;
    char name[SIZE];
    long int p;
    char ch;

    printf("Enter the file name:\n");
    scanf("%s", name);

    if ((fp = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s.\n", name);
        exit(EXIT_FAILURE);
    }

    printf("Enter a starting number(<0 or q to quit):\n");
    while (((scanf("%ld", &p)) == 1) && (p >= 0))
    {
        fseek(fp, p, SEEK_SET);
        while ((ch = getc(fp)) != '\n')
            putchar(ch);
    }
    if (fclose(fp) != 0)
        fprintf(stderr, "Error closing file\n");

    system("pause");
    return 0;
}
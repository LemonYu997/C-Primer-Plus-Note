#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 256

int main(int argc, char * argv[])
{
    FILE *fp;
    char st[SIZE];

    if (argc != 3)
    {
        fprintf(stderr, "You error.\n");
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while (fgets(st, SIZE, fp) != NULL)
    {
        if (strstr(st, argv[1]))
        {
            fputs(st, stdout);
        }
    }
    fclose(fp);
    printf("Done.\n");

    return 0;
}
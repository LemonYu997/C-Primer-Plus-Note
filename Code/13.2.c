#include <stdio.h>
#include <stdlib.h>

void copy(FILE *f1, FILE *f2);

int main(int argc, char * argv[])
{
    FILE *f1, *f2;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s characters filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else if ((f1 = fopen(argv[1], "rb")) == NULL || (f2 = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stderr, "Can't open file.\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        copy(f1, f2);
        printf("Done\n");
    }
    fclose(f1);
    fclose(f2);

    return 0;
}

void copy(FILE *f1, FILE *f2)
{
    int ch = 0;

    while ((ch = fgetc(f1)) != EOF)
    {
        fputc(ch, f2);
    } 
}
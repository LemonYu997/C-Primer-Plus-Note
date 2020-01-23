#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000

int main(int argc, char * argv[])
{
    FILE *fp;
    int i;
    char temp[SIZE];

    for (i = 1; i < argc; i++)
    {
        if ((fp = fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Can't find file.\n");
            exit(EXIT_FAILURE);
        }
        printf("NO.%d: %s\n", i, argv[i]);

        while (fgets(temp, SIZE, fp) != NULL)
        {
            fputs(temp, stdout);
        }
        fclose(fp);
        printf("\n");
    }
    printf("Done.\n");

    return 0;
}

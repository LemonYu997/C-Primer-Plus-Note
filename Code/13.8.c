#include <stdio.h>
#include <stdlib.h>

int find(int ch, FILE *fp);

int main(int argc, char * argv[])
{
    int ch = argv[1][0];
    int num = 0;
    FILE *fp;
    int i = 2;                          

    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s character filename.\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else if(argc == 2)
    {
        num = find(ch, stdin);
        printf("You input has %d %c.\n", num, ch);
    }
    else
    {
        while (i < argc)
        {
            if ((fp = fopen(argv[i], "r")) == NULL)
            {
                fprintf(stderr, "Can't open %s\n", argv[i]);
                exit(EXIT_FAILURE);
            }
            num += find(ch, fp);
            i++;
            printf("The NO.%d file %s have %d %c.\n", i - 2, argv[i - 1], num, ch);
            if (fclose(fp) != 0)
                fprintf(stderr, "Error closing file\n");
        }
    }
    printf("Done.\n");

    return 0;
}

int find(int ch, FILE *fp)
{
    int temp;
    int num = 0;

    while ((temp = getc(fp)) != EOF)
    {
        if (temp == ch)
        {
            num++;
        }
    }

    return num;
}

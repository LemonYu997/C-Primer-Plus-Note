#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 256                                        //最大256为一行

int main(int argc, char * argv[])
{
    FILE *f1, *f2;
    char l1[SIZE];
    char l2[SIZE];

    if (argc != 3)
    {
        fprintf(stderr, "You shoule enter 2 files.\n");
        exit(EXIT_FAILURE);
    }
    if ((f1 = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((f2 = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    printf("Here:\n");
    while (feof(f1) == 0 || feof(f2) == 0)              //只要文件 f1和 f2没有读到结尾
    {    
        if ((fgets(l1, SIZE, f1)) != NULL)
            fputs(l1, stdout);
        if ((fgets(l2, SIZE, f2)) != NULL)
            fputs(l2, stdout);
    }
    fclose(f1);
    fclose(f2);

    return 0;
}
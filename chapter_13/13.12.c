#include <stdio.h>
#include <stdlib.h>
#define ROW 20              //行
#define COL 30              //列
#define SIZE 40

int main(int argc, char * argv[])
{
    FILE *f1, *f2;
    int i, j;
    int ar[ROW][COL] = {0};

    if (argc != 3)
    {
        fprintf(stderr, "You error.\n");
        exit(EXIT_FAILURE);
    }
    if ((f1 = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((f2 = fopen(argv[2], "w+")) == NULL)
    {
        fprintf(stderr, "Can't open %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < ROW; i++)                   //读取源文件中的字符
    {
        for (j = 0; j < COL; j++)
        {
            fscanf(f1, "%d", &ar[i][j]);
        }
    }

    for (i = 0; i < ROW; i++)                   //根据字符打印并将其输出在f2中
    {
        for (j = 0; j < COL; j++)
        {
            switch(ar[i][j])
            {
                case 0:
                    putchar(' ');
                    fputc(' ', f2);
                    break;
                case 1:
                    putchar('.');
                    fputc('.', f2);
                    break;
                case 2:
                    putchar('\'');
                    fputc('\'', f2);
                    break;
                case 3:
                    putchar(':');
                    fputc(':', f2);
                    break;
                case 4:
                    putchar('~');
                    fputc('~', f2);
                    break;
                case 5:
                    putchar('*');
                    fputc('*', f2);
                    break;
                case 6:
                    putchar('=');
                    fputc('=', f2);
                    break;
                case 7:
                    putchar('$');
                    fputc('$', f2);
                    break;
                case 8:
                    putchar('%');
                    fputc('%', f2);
                    break;
                case 9:
                    putchar('#');
                    fputc('#', f2);
                    break;
                default:
                    break;
            }
        }
        fputc('\n', f2);
        fputc('\0', f2);
        printf("\n");
    }

    return 0;
}

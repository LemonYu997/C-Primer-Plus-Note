//将文本内容转为大写
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#define SIZE 40
#define FSIZE 1000

int main(void)
{
    int ch;
    char name[SIZE];
    char temp[FSIZE];
    FILE *fp;
    int i = 0;

    printf("Enter the name of file do you want to copy:\n");
    scanf("%s", name);

    if ((fp = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "Can't open file.\n");
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF)                  //将文本中字符转为大写并储存在temp中
    {
        ch = toupper(ch);
        temp[i] = ch;
        i++;
    }
    fclose(fp);

    if ((fp = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Can't open file.\n");
        exit(EXIT_FAILURE);
    }
    fprintf(fp, "%s", temp);                        //将temp中的字符输出在文件中
    fclose(fp);
    printf("Done.\n");

    system("pause");
    return 0;
}
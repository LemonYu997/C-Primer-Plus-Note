#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define LEN 40

int main(void)
{
    FILE *in, *out;
    int ch;
    int count = 0;
    char f1[LEN];
    char f2[LEN];

    printf("Enter the name of source file:\n");
    scanf("%s", f1);
    //设置输入
    if ((in = fopen(f1, "r")) == NULL)
    {
        fprintf(stderr, "I could't open the file \"%s\"\n", f1);
        exit(EXIT_FAILURE);
    }
    //设置输出
    strncpy(f2, f1, LEN - 5);
    f2[LEN - 5] = '\0';
    strcat(f2, ".red");               //在文件名后添加.red
    if ((out = fopen(f2, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    //拷贝数据
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);              //打印 3个字符中的第 1个字符
    //收尾工作
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files.\n");

    system("pause");
    return 0;
}
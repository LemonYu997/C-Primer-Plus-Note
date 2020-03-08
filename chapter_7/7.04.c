#include <stdio.h>
#include <windows.h>

int main(void)
{
    char ch;
    int i = 0, j =0;

    printf("Enter a string:\n");
    while ((ch = getchar()) != '#')                                 //输入的字符不是#
    {
        if (ch == '.')                                              //输入的字符为句号时，打印一次！
        {
            putchar('!');
            i++;
        }
        else if (ch == '!')                                         //输入的字符为感叹号时，打印两次！！
        {
            putchar('!');
            putchar('!');
            j++;
        }
        else                                                        //其他字符按输入打印
            putchar(ch);
    }
    putchar('\n');

    printf("The times of '.' replaced is %d.\n", i);
    printf("The times of '!' replaced is %d.\n", j);

    system("pause");
    return 0;
}
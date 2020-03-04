#include <stdio.h>
#include <windows.h>

int main(void)
{
    char ch, prev, now;                                 //prev为第一个字符,now为第二个字符
    int n = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == 'e')
        {
            prev = ch;
            continue;
        }
        else if (ch == 'i')
        {
            now = ch;
            if (prev == 'e' && now == 'i')              //第一个字符为e，第二个字符为i
                n++;
            now = 'a';                                  //初始化，开始下一次计数
            prev = 'a';
            continue;
        }
        else
            continue;
    }
    printf("There %s %d \"ei\" . \n", (n > 1) ? "are" : "is", n);       //当有一次时，用is，有多次时用are

    system("pause");
    return 0;
}
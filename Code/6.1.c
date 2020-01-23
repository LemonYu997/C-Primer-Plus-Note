#include <stdio.h>
#include <windows.h>
#define SIZE 26

int main(void)
{
    char ch[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        ch[i] = 'a' + i;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("%c", ch[i]);
    }

    system("pause");
    return 0;
}
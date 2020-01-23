#include <stdio.h>
#include <windows.h>

int main(void)
{
    char str[20];
    int i;

    printf("Enter a word: ");
    scanf("%s", str);

    for (i = strlen(str) - 1; i >= 0; i--)              //strlen(str)的值为输入单词的字符数，若i=srelen(i)，则str[i] = ' '
        printf("%c", str[i]);

    system("pause");
    return 0;
}
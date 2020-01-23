#include <stdio.h>
#include <windows.h>

int main(void)
{
    int row, col, index;
    char ch[26];
    index = 0;
    for (row = 0; row < 6; row++)
    {
        for (col = 0; col <= row; col++)
        {
            ch[index] = 'A' + index;
            printf("%c", ch[index]);
            index++;
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
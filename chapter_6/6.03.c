#include <stdio.h>
#include <windows.h>

int main(void)
{
    char ch[6] = "ABCDEF";
    int row, col;
    for (row = 5; row >= 0; row--)
    {
        for (col = 5; col >= row; col--)
            printf("%c", ch[col]);
        printf("\n");
    }
    system("pause");
    return 0;
}
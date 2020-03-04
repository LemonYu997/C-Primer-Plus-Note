#include <stdio.h>
#include <windows.h>

int main(void)
{
    int row, col;
    for (row = 0; row < 5; row++)
    {
        for (col = 0; col <= row; col++)
            printf("$");
        printf("\n");
    }

    system("pause");
    return 0;
}
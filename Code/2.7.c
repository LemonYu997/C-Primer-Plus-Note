#include <stdio.h>
#include <windows.h>

void sm();

int main(void)
{
    sm();
    sm();
    sm();
    printf("\n");
    sm();
    sm();
    printf("\n");
    sm();
    printf("\n");

    system("pause");
    return 0;
}

void sm()
{
    printf("Smile!");
}
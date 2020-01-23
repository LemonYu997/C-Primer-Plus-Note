#include <stdio.h>
#include <windows.h>
int main(void)
{
    int ascii;
    printf("Please enter ASCII you want to print:");
    scanf("%d", &ascii);
    printf("You enter the %c really?", ascii);

    system("pause");
    return 0;
}
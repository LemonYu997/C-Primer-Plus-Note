#include <stdio.h>
#include <windows.h>

int main(void)
{
    int n, m;
    printf("Enter an integer: ");
    scanf("%d", &n);
    m = n + 10;
    while (n <= m)
    {
        printf("%5d", n);
        n++;
    }
    printf("\n");

    system("pause");
    return 0;
}
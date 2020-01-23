#include <stdio.h>
#include <windows.h>
#define SIZE 8

int main(void)
{
    int num[SIZE];
    int i;

    printf("Enter %d interges.\n", SIZE);

    for (i = 0; i < SIZE; i++)
        scanf("%d", &num[i]);

    printf("Watch!\n");
    for (i = SIZE - 1; i >= 0; i--)
        printf("%d\n", num[i]);

    printf("Done\n");

    system("pause");
    return 0;
}
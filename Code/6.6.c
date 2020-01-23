#include <stdio.h>
#include <windows.h>

int main(void)
{
    int min, max, index;
    int square, cube;
    printf("Enter minimum and maximum values: ");
    
    while (scanf("%d %d", &min, &max) == 2)
    {
        printf("%5s %10s %15s\n", "num", "square", "cube");
        for (index = min; index <= max; index++)
        {
            square = index * index;
            cube = index * square;
            printf("%5d %10d %15d\n", index, square, cube);
        }
        printf("Enter next interval: ");
    }

    system("pause");
    return 0;
}
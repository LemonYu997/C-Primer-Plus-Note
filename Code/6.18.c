#include <stdio.h>
#include <windows.h>
#define Dunbar_Number 150

int main(void)
{
    int friends = 5;
    int weeks = 1;

    while (friends < Dunbar_Number)
    {
        friends -= weeks;
        friends *= 2;
        weeks++;
        printf("%d weeks have %d friends.\n", weeks, friends);
    }
    printf("In %d weeks you have touch the Dunbar's number.\n", weeks);

    system("pause");
    return 0;
}
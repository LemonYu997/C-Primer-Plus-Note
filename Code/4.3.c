#include <stdio.h>
#include <windows.h>

int main(void)
{
    float num;
    printf("Enter a float number:\n");
    scanf("%f", &num);
    printf("The input is %0.1f or %0.1e.\n", num, num);
    printf("The input is %+0.3f or %0.3e.\n", num, num);

    system("pause");
    return 0;
}
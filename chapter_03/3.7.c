#include <stdio.h>
#include <windows.h>
int main(void)
{
    float high;
    float inch = 2.54;
    printf("what's high of you(inch): ");
    scanf("%f", &high);
    printf("Ok, you are %.2f cm.\n", inch * high);

    system("pause");
    return 0;
}
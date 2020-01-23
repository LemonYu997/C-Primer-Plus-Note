#include <stdio.h>
#include <windows.h>
int main(void)
{
    float a;
    printf("Enter a floating-point value:");
    scanf("%f", &a);
    printf("fixed-point notation: %.6f\n", a);
    printf("exponential notation: %e\n", a);
    printf("p notation: %a\n", a);

    system("pause");
    return 0;
}
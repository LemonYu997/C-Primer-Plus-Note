#include <stdio.h>
#include <windows.h>

int main(void)
{
    float hight;
    char name[20];
    printf("Enter your hight:\n");
    scanf("%f", &hight);
    printf("Enter your name:\n");
    scanf("%s", name);
    printf("%s, you are %.2f cm tall.\n", name, hight);

    system("pause");
    return 0;
}
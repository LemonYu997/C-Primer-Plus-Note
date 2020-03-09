//把年龄转换为天数
#include <stdio.h>
#include <windows.h>

int main(void)
{
    int n;
    printf("How old are you?\n");
    scanf("%d", &n);
    printf("Oh, you have %d days.\n", n * 365);

    system("pause");
    return 0;
}
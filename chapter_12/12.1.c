#include <stdio.h>
#include <windows.h>

void critic(int * address);

int main(void)
{
    int units;

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
        critic(&units);                                             //要把输入的值返回units所在的地址，使循环判断的units和输入的units是同一个变量。
    printf("You must have looked it up!\n");

    system("pause");
    return 0;
}

void critic(int * address)
{
    printf("No luck, my friend. Try again.\n");
    scanf("%d", address);
}
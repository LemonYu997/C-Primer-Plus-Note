#include <stdio.h>
#include <windows.h>

int num = 0;
int use(void);

int main(void)
{
    int i;
    for (i = 0; i < 10; i++)
        use();

    printf("%d times.\n", num);

    system("pause");
    return 0;
}

int use(void)
{
    num++;
    return num;
}
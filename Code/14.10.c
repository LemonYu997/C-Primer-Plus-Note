#include <stdio.h>
#include <string.h>
#include <windows.h>

int add(int a, int b);
int mul(int a, int b);

int main(void)
{
    int a, b;
    int (*f[2])(int, int) = {add, mul};
    char ch;
    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    getchar();                                  //吞回车

    printf("Choose it(other to quit):\n");
    printf("a) add  b) mul\n");
    scanf("%c", &ch);
    getchar();

    if (ch == 'a')
    {
        num1 = (*f[0])(a, b);
        printf("This sum of %d and %d is %d.\n", a, b, num1);
    }
    if (ch == 'b')
    {
        num2 = (*f[1])(a, b);
        printf("This product of %d and %d is %d.\n", a, b, num2);
    }

    system("pause");
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a * b;
}
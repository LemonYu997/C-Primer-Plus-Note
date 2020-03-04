#include <stdio.h>
#include <windows.h>

unsigned int rotate_1(unsigned int num, int n);
void pbit(unsigned int num);

int main(void)
{
    unsigned int num;
    int n;

    printf("Enter a unsigned int number:\n");
    scanf("%d", &num);
    printf("Enter the number of digits you want to turn left:\n");
    scanf("%d", &n);

    num = rotate_1(num, n);
    pbit(num);

    system("pause");
    return 0;
}

unsigned int rotate_1(unsigned int num, int n)                              //有问题  只左移但没有旋转
{
    int i;
    for (i = 0; i < n; i++)
        num = (num >> (8 * sizeof(unsigned int) - 1)) | (num << 1);

    return num;
}

void pbit(unsigned int num)             
{
    int len = 8;
    char binary[len];
    int i = 0;

    while (i < len)
    {
        (num % 2) ? (binary[i++] = '1') : (binary[i++] = '0');
        num /= 2;
    }

    for (i = len - 1; i >= 0; i--)
        printf("%c", binary[i]);
}
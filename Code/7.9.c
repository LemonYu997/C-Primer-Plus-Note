//只接受正整数输入，然后显示所有小于或等于该数的素数
#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main(void)
{
    int num;
    int i;
    int min = 1;
    bool isPrime;

    printf("Enter a integer: ");
    scanf("%d", &num);

    while (min < num)
    {
        for (i = 2, isPrime = true; (i * i) <= min; i++)
        {
            if (min % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d is a prime which is smaller than your number.\n", min);
        }
        min++;
    }

    system("pause");
    return 0;
}
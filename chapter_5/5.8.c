#include <stdio.h>
#include <windows.h>

int main(void)
{
    int m, n, ans;
    printf("This program computers moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &m);
    printf("Now enter the first operand: ");
    scanf("%d", &n);
    while (n > 0)
    {
        ans = n % m;
        printf("%d %% %d is %d\n", n, m, ans);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &n);
    }
    printf("Done\n");
    
    system("pause");
    return 0;
}
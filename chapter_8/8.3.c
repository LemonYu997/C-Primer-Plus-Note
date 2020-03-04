#include <stdio.h>
#include <windows.h>
#include <ctype.h>              //判断大小写

int main(void)
{
    char ch;
    int n_upper, n_lower, n_other;
    n_upper = n_lower = n_other = 0;

    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            n_upper++;
        else if (islower(ch))
            n_lower++;
        else
            n_other++;
    }
    printf("There are %d upper %d lower and %d other characters.\n", n_upper, n_lower, n_other);

    system("pause");
    return 0;
}
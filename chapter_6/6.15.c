#include <stdio.h>
#include <windows.h>
#include <string.h>
#define MAX 255

int main(void)
{
    char str[MAX];
    int i, index;
    index = 0;
    
    printf("Enter a string: ");
    for (i = 0; i < MAX; i++)
    {
        scanf("%c", &str[i]);
        index++;                                //统计字符个数
        if (str[i] == '\n')
            break;
    }

    for (i = index - 1; i >= 0; i--)            //从index处倒序打印
        printf("%c", str[i]);
    printf("\n");

    system("pause");
    return 0;
}
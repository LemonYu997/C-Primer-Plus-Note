#include <stdio.h>
#include <windows.h>

int main(void)
{
    char ch;
    int i = 1;
    
    while ((ch = getchar()) != EOF)
    {   
        if (ch < ' ')
            switch (ch)
            {
                case '\n':
                    printf("\\n");
                    break;
                case '\t':
                    printf("\\t");
                    break;
                default:
                    printf("^%c:%d", ch + 64, ch);
                    break;
            }
        else
            printf("%c:%d ", ch, ch);
        
        if (i++ %10 == 0)
            putchar('\n');
    }

    system("pause");
    return 0;
}
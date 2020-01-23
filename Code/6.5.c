#include <stdio.h>
#include <windows.h>

int main(void)
{
    char letter[26];
    char input;
    int i, j, k;
    int index = 0;

    for (i = 0; i < 26; i++)
    {
        letter[index] = 'A' + i;
        index++;
    }    

    printf("Enter a capital letter: ");
    scanf("%c", &input);

    for (i = 0; i < input - 65 + 1; i++)
    {
        for (j = 0; j < input - 65 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%c", letter[j]);
        }
        for (k = i - 1; k >= 0; k--)
        {
            printf("%c", letter[k]);
        }
        printf("\n");
    }
    printf("\n");

    system("pause");
    return 0;
}
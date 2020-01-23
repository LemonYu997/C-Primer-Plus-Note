#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define SIZE 50

int main(void)
{
    int num;
    int i, j;
    int len;
    char **p;
    char *temp;
    char st[SIZE];

    printf("How many words do you wish to enter? ");
    scanf("%d", &num);
    printf("Enter 5 words now:\n");
    p = (char **)malloc(num * sizeof(char *));
    
    for (i = 0; i < num; i++)
    {
        scanf("%s", st);
        len = strlen(temp);
        temp = (char *)malloc(SIZE * sizeof(char));
        for (j = 0; j < num; j++)
        {
            temp[j] = st[j];
        }
        p[i] = temp;
    }

    printf("Here are your words:\n");
    for (i = 0; i < num; i++)
    {
        puts(p[i]);
    }

    system("pause");
    return 0;
}

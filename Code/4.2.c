#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(void)
{
    char name[20];

    printf("What's your name?\n");
    scanf("%s", name);
    printf("Your name is \"%s\".\n", name);
    printf("Your name is \"%20s\".\n", name);
    printf("\"%-20s\" \n", name);
    printf("%23s\n", name);

    system("pause");
    return 0;
}
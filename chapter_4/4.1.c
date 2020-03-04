#include <stdio.h>
#include <windows.h>

int main(void)
{
    char fname[20];
    char lname[20];
    printf("what's your first name?\n");
    scanf("%s", fname);
    printf("what's your last name?\n");
    scanf("%s", lname);
    printf("OK, your name is %s,%s.\n", fname, lname);

    system("pause");
    return 0;
}
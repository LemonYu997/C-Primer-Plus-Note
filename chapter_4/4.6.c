#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(void)
{
    char fname[20];
    char lname[20];
    int fnum;
    int lnum;

    printf("Enter your first name:");
    scanf("%s", fname);
    printf("Enter your last name:");
    scanf("%s", lname);
    fnum = strlen(fname);
    lnum = strlen(lname);
    printf("%s %s\n", fname, lname);
    printf("%*d %*d\n", fnum, fnum, lnum, lnum);
    printf("%s %s\n", fname, lname);
    printf("%-*d %-*d\n", fnum, fnum, lnum, lnum);

    system("pause");
    return 0;
}
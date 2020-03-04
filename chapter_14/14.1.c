#include <stdio.h>
#include <windows.h>
#define SIZE 20

struct month {
    char name[10];
    char abbrev[4];
    int days;
    int monnumb;
};

struct month months[12] = {
    {"January", "jan", 31, 1},
    {"February", "feb", 28, 2},
    {"March", "mar", 31, 3},
    {"April", "apr", 30, 4},
    {"May", "may", 31, 5},
    {"June", "jun", 30, 6},
    {"July", "jul", 31, 7},
    {"August", "aug", 31, 8},
    {"September", "sep", 30, 9},
    {"October", "oct", 31, 10},
    {"November", "nov", 30, 11},
    {"December", "dec", 31, 12}
};

int days(char *mname);

int main(void)
{
    char name[SIZE];
    int total = 0;

    printf("Enter the abbreviated month name:\n");
    gets(name);                                         //用gets()可以舍掉换行符

    total = days(name);
    if (total == 0)                                     //total==0说明输入有误，没有计算出正确结果
    {
        printf("You error.\n");
    }
    else
    {
            printf("The total days are %d.\n", total);
    }

    system("pause");
    return 0;
}

int days(char *mname)
{
    int total = 0;
    int i, j;

    for (i = 0; i < 12; i++)
    {
        if (strcmp(mname, months[i].abbrev) == 0)
        {
            for (j = 0; j <= i; j++)                    //包括该月的天数
                total += months[j].days;
        }
    }

    return total;
}
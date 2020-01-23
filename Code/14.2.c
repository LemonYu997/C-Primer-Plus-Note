#include <stdio.h>
#include <stdlib.h>
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

int day_month(char *mname);

int main(void)
{
    int year;
    char mname[SIZE];
    int total = 0;
    int monthnum = 0;
    int i;
    int date;

    printf("Enter the year:\n");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)      //闰年：公历年份是4的倍数的，一般是闰年。公历年份是整百数的，必须是400的倍数才是闰年。
        months[1].days = 29;

    printf("Enter the name or number of month:\n");
    if (scanf("%d", &monthnum) == 1)                                //如果输入的是月号
    {
        for (i = 0; i < monthnum - 1; i++)                          //不包括这一月
            total += months[i].days;
    }
    else if (gets(mname))                                           //若果输入的是名字
    {
        total = day_month(mname);
    }

    printf("Enter the date:\n");
    scanf("%d", &date);
    total += date;

    printf("Total days are %d.\n", total);

    system("pause");
    return 0;
}

int day_month(char *mname)
{
    int total = 0;
    int i, j;

    for (i = 0; i < 12; i++)
    {
        if ((strcmp(mname, months[i].name) == 0) || (strcmp(mname, months[i].abbrev) == 0))
        {
            for (j = 0; j < i; j++)                                  //不包括该月的天数
                total += months[j].days;
        }
    }
    if (total == 0)
    {
        printf("You error.\n");
        exit(EXIT_FAILURE);                                         //数入错误，退出
    }

    return total;
}
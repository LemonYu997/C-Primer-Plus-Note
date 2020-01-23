#include <stdio.h>
#include <windows.h>
#define MONEY_PER_HOUR 10
#define RATE_1 0.15                         //300以下
#define RATE_2 0.20                         //300-450
#define RATE_3 0.25                         //450以上
#define MAX_HOURS 40                        //超过40小时算加班
#define RATE_OVERTIME 1.5                   //加班时间按1.5倍计算工时

int main(void)
{
    int hours;
    double base = 0.0, rate = 0.0, income = 0.0;              //基础工资， 税， 实际收入

    printf("Enter your working hours: ");
    scanf("%d", &hours);

    if (hours > MAX_HOURS)                  //如果工作时间大于加班时间
    {
        base = MONEY_PER_HOUR * hours + (hours - MAX_HOURS) * RATE_OVERTIME;
        if (base >= 300 && base <= 450)
            rate = RATE_1 * 300 + (base - 300) * RATE_2;
        else if (base >= 450)
            rate = RATE_1 * 300 + 150 * RATE_2 + (base - 450) * RATE_3;
        else
            rate = base * RATE_1;

        income = base - rate;
    }
    else if (hours >= 0 && hours <= MAX_HOURS)
    {
        base = MONEY_PER_HOUR * hours;
        if (base >= 300 && base <= 450)
            rate = RATE_1 * 300 + (base - 300) * RATE_2;
        else if (base >= 450)
            rate = RATE_1 * 300 + 150 * RATE_2 + (base - 450) * RATE_3;
        else
            rate = base * RATE_1;

        income = base - rate;
    }
    else
        printf("You are error.\n");

    printf("Your salary is $%.2f, income is $%.2f, tax is $%.2f.\n", base, income, rate);

    system("pause");
    return 0;
}

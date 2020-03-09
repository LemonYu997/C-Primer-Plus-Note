#include <stdio.h>
#include <windows.h>
#define RATE_1 0.15                         //300以下
#define RATE_2 0.20                         //300-450
#define RATE_3 0.25                         //450以上
#define MAX_HOURS 40                        //超过40小时算加班
#define RATE_OVERTIME 1.5                   //加班时间按1.5倍计算工时

int main(void)
{
    int hours;
    double base = 0.0, rate = 0.0, income = 0.0;              //基础工资， 税， 实际收入
    char level;
    double base_hour;

    printf("**********************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr    2) $9.33/hr\n");
    printf("3) $10.00/hr   4) $11.20/hr\n");
    printf("5) quit\n");
    printf("**********************************************************************\n");
    printf("Please chose the level of salary: ");

    while ((level = getchar()) != 'q')                                         //输入一个字符，5是退出
    {
        switch(level)
        {
            case 'a':
                base_hour = 8.75;
                break;
            case 'b':
                base_hour = 9.33;
                break;    
            case 'c':
                base_hour = 10.00;
                break;
            case 'd':
                base_hour = 11.20;
                break;   
            default:                                                            //输入其他时重新输入
                printf("Please enter character a to d (q to quit):\n");
                continue;                   
        }
        printf("Enter your working hours: ");
        scanf("%d", &hours);

        if (hours > MAX_HOURS)                                                  //如果工作时间大于加班时间
        {
            base = base_hour * hours + (hours - MAX_HOURS) * RATE_OVERTIME;
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
            base = base_hour * hours;
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
        break;                                                                  //运行结束时跳出循环，避免再次循环输入
    }
    printf("Done.\n");

    system("pause");
    return 0;
}

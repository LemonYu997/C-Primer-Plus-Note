#include <stdio.h>
#include <windows.h>
#define TYPE1 1
#define TYPE2 2
#define TYPE3 3
#define TYPE4 4
#define RATE1 0.15
#define RATE2 0.28
#define TYPE1_BASE 17850
#define TYPE2_BASE 23900
#define TYPE3_BASE 29750
#define TYPE4_BASE 14875

int main(void)
{
    double tax, income, base;
    int type;

    printf("Enter the type of rate:\n");
    printf("1) bachelordom  2) head of household  3) married  4) divorced  5) quit\n");
    while ((scanf("%d", &type)) == 1 && type != 5)
    {
        switch (type)
        {
            case TYPE1:
                base = TYPE1_BASE;
                break;
            case TYPE2:
                base = TYPE2_BASE;
                break;
            case TYPE3:
                base = TYPE3_BASE;
                break;
            case TYPE4:
                base = TYPE4_BASE;
                break;
            default:
                printf("Please enter number 1 to 5:\n");
                continue;
        }
        printf("Enter your income: ");
        scanf("%lf", &income);
        
        if (income > base)
            tax = base * RATE1 + (income - base) * RATE2;
        else
            tax = income * RATE1;

        printf("You should payment $%.2f of tax.\n", tax);
        printf("Enter the type of rate:\n");
    }
    printf("Done\n");

    system("pause");
    return 0;
}
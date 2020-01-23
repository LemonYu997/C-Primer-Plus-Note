#include <stdio.h>
#include <windows.h>
#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09
#define WEIGHT1 6.5
#define WEIGHT2 14
#define WEIGHT3 0.5

int main(void)
{
    char type = 0;
    float a, b, c;
    float basea, baseb, basec;
    float pay, carrage;
    float sum, suma, sumb, sumc;
    suma = sumb = sumc = 0;

    while (type != 'q')
    {
        printf("What vegetables would you like: \n");
        printf("a) artichoke  b) beet  c) carrot  q) quit\n");

        type = getchar();
        switch(type)
        {
            case 'a':
                printf("Enter the pounds of artichoke: ");
                scanf("%f", &a);
                suma += a;
                break;
            case 'b':
                printf("Enter the pounds of beet: ");
                scanf("%f", &b);
                sumb += b;
                break;
            case 'c':
                printf("Enter the pounds of carrot: ");
                scanf("%f", &c);
                sumc += c;
                break;
            case 'q':
                continue;
            default:
                printf("Enter again.\n");
                break;
        }
        while(getchar() != '\n')
            continue;
    }

    basea = ARTICHOKE * suma;
    baseb = BEET * sumb;
    basec = CARROT * sumc;
    sum = suma + sumb + sumc;

    if (sum <= 5)
        carrage = WEIGHT1;
    else if (sum > 5 && sum <= 20)
        carrage = WEIGHT2;
    else
        carrage = WEIGHT2 + WEIGHT3 * (sum - 20);

    pay = basea + baseb + basec + carrage;

    printf("You should pay $%.2f, The carrage is $%.2f.\n", pay, carrage);

    system("pause");
    return 0;
}
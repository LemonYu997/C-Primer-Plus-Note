#include <stdio.h>
#include <ctype.h>
#include <windows.h>

char get_choice(void);
char get_first(void);
double get_number(void);
void add(void);
void subtract(void);
void multiply(void);
void divide(void);

int main(void)
{
    char choice;
    while ((choice = get_choice()) != 'q')
    {
        switch (choice)
        {
            case 'a':
                add();
                break;
            case 's':
                subtract();
                break;
            case 'm':
                multiply();
                break;
            case 'd':
                divide();
                break;
        }
    }

    system("pause");
    return 0;
}

char get_choice(void)
{
    printf("Enter the operation of your choice:\n");
    printf("a. add          s. subtract\n");
    printf("m. multiply     d. divide\n");
    printf("q. quit\n");

    return (tolower(get_first()));
}

char get_first(void)
{
    int ch;

    while (!isalpha(ch = getchar()));
    while (getchar() != '\n');

    return ch;
}

double get_number(void)
{
    double num;

    printf("Please enter a number: ");
    while (!scanf("%lf", &num))
    {
        while (getchar() != '\n');
        printf("It's not a number, please enter a number: ");
    }

    return num;
}

void add(void)
{
    double first, second;

    first = get_number();
    second = get_number();

    printf("*************************************\n");
    printf("%.2f + %.2f = %.2f\n", first, second, first + second);
    printf("*************************************\n");
}

void subtract(void)
{
    double first, second;

    first = get_number();
    second = get_number();

    printf("*************************************\n");
    printf("%.2f - %.2f = %.2f\n", first, second, first - second);
    printf("*************************************\n");
}

void multiply(void)
{
    double first, second;

    first = get_number();
    second = get_number();

    printf("*************************************\n");
    printf("%.2f * %.2f = %.2f\n", first, second, first * second);
    printf("*************************************\n");
}

void divide(void)
{
    double first, second;

    first = get_number();
    second = get_number();

    printf("*************************************\n");
    printf("%.2f / %.2f = %.2f\n", first, second, first / second);
    printf("*************************************\n");
}
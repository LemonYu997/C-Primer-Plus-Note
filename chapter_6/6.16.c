#include <stdio.h>
#include <windows.h>
#define Simple_Interest 0.1
#define Compound_Interest 0.05

int main(void)
{
    float base = 100.00;
    float Daphne, Deirdre;
    int years = 0;

    Daphne = Deirdre = base;

    while (Deirdre <= Daphne)
    {
        Daphne += base * Simple_Interest;
        Deirdre += Deirdre * Compound_Interest;
        years++;
        printf("The %d year.\n", years);
        printf("Daphne: %15.3f\n", Daphne);
        printf("Deirdre: %15.3f\n", Deirdre);
        printf("-------------------------------------\n");
    }
    printf("It takes %d years.\n", years);

    system("pause");
    return 0;
}
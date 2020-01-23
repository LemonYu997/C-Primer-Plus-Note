#include <stdio.h>
#include <windows.h>

void br();
void ic();

int main(void)
{
    br(); 
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    system("pause");

    return 0;
}

void br()
{
    printf("Brazil, Russia");
}

void ic()
{
    printf("India, China");
}
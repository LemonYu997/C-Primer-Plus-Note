#include <stdio.h>
#include <windows.h>
int main(void)
{
    int age;
    float seconds;
    seconds = 3.156e7;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("you already spend %f seconds.\n", seconds * age);

    system("pause");
    return 0;
}
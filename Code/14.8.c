#include <stdio.h>
#include <string.h>
#include <windows.h>
#define SIZE 40

struct seatinfo {
    char num[SIZE];
    int reserve;
    char fname[SIZE];
    char lname[SIZE];
};

void shownum(struct seatinfo *pt);
void showlist(struct seatinfo *pt);
void showalpha(struct seatinfo *pt);
void assign(struct seatinfo *pt);
void delete(struct seatinfo *pt);

int main(void)
{
    struct seatinfo info[12] = {{"", 0, "", ""}};           //初始化
    char ch;
    
    while (1)
    {
        printf("To choose a function, enter its letter label:\n");
        printf("a) Show number of empty seats\n");
        printf("b) Show list of empty seats\n");
        printf("c) Show alphabetical list of seats\n");
        printf("d) Assign a customer to a seat assignment\n");
        printf("e) Delete a seat assignment\n");
        printf("f) Quit\n");

        scanf("%c", &ch);
        switch (ch)
        {
            case 'a':
                shownum(info);
                break;
            case 'b':
                showlist(info);
                break;
            case 'c':
                showalpha(info);
                break;
            case 'd':
                assign(info);
                break;
            case 'e':
                delete(info);
                break;
            case 'f':
                break;
            default:
                break;
        }
    }
    
    system("pause");
    return 0;
}

void shownum(struct seatinfo *pt)
{
    int i;
    int count = 0;

    for (i = 0; i < 12; i++)
    {
        if (pt[i].reserve == 0)
            count++;
    }

    printf("Have %d empty seats.\n", count);
}

void showlist(struct seatinfo *pt)
{
    int i;

    for (i = 0; i < 12; i++)
    {
        if (pt[i].reserve == 0)
            printf("Flight %d has empty seats.\n", i);
    }
}

void showalpha(struct seatinfo *pt)
{
    struct seatinfo temp;
    int i;

    for (i = 0; i < 12; i++)
    {
        if (strcmp(pt[i].fname, pt[i + 1].fname) > 0)
        {
            temp = pt[i];
            pt[i] = pt[i + 1];
            pt[i + 1] = temp;
        }
    }
    for (i = 0; i < 12; i++)
        printf("%s %s : %s\n", pt[i].fname, pt[i].lname, pt[i].num);
}

void assign(struct seatinfo *pt)
{
    int i;

    printf("Enter the filght:\n");
    scanf("%d", &i);
    printf("Choose seat:\n");
    scanf("%s", pt[i].num);
    printf("Enter the first name of customer:\n");
    scanf("%s", pt[i].fname);
    printf("Enter the last name of the customer:\n");
    scanf("%s", pt[i].lname);
}

void delete(struct seatinfo *pt)
{   
    struct seatinfo temp = {"", 0, "", ""};
    char num[SIZE];
    int i;
    int flag = 0;

    printf("Enter the seat number you want to delete:\n");
    scanf("%s", num);

    for (i = 0; i < 12; i++)
    {
        if (strcmp(pt[i].num, num) == 0)
        {
            pt[i] = temp;
            flag = 1;
        }
    }

    if (flag)
        printf("You delete the %d seat.\n", i);
    else
        printf("Can't find this seat.\n");
}

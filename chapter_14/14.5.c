#include <stdio.h>
#include <windows.h>
#define SIZE 40
#define CSIZE 4

struct name {
    char fname[SIZE];
    char lname[SIZE];
};

struct student {
    struct name sname;
    float grade[3];
    float aver;
};

void input(struct student info[CSIZE]);
void average(struct student info[CSIZE]);
void print_info(struct student info[CSIZE]);
void print_aver(struct student info[CSIZE]);

int main(void)
{
    struct student info[CSIZE];

    input(info);
    average(info);
    print_info(info);
    print_aver(info);

    system("pause");
    return 0;
}

void input(struct student info[CSIZE])
{
    int i, j;

    for (i = 0; i < CSIZE; i++)
    {
        printf("Enter the first name of studet:\n");
        gets(info[i].sname.fname);

        printf("Enter the last name of the student:\n");
        gets(info[i].sname.lname);

        for (j = 0; j < 3; j++)
        {
            printf("Enter N0.%d score of student:\n", j + 1);
            scanf("%f", &info[i].grade[j]);
            getchar();                  //吞掉scanf中的换行符
        }
    }
}

void average(struct student info[CSIZE])
{
    float total;
    int i, j;


    for (i = 0; i < CSIZE; i++)
    {
        total = 0;
        for (j = 0; j < 3; j++)
            total += info[i].grade[j];
        info[i].aver = total / 3;
    }
}

void print_info(struct student info[CSIZE])
{
    int i;

    for (i = 0; i < CSIZE; i++)
    {
        printf("Student: %s %s, grade: %.2f %.2f %.2f, average: %.2f.\n", 
            info[i].sname.fname, info[i].sname.lname, info[i].grade[0], info[i].grade[1], info[i].grade[2], info[i].aver);    
    }
}

void print_aver(struct student info[CSIZE])
{
    float total = 0;
    int i;

    for (i = 0; i < CSIZE; i++)
    {
        total += info[i].aver;
    }
    printf("The average score of class is %.2f.\n", total / CSIZE);
}
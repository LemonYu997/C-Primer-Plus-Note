#include <stdio.h>
#include <windows.h>
#define SIZE 40

struct fmlname {
    char fname[SIZE];
    char mname[SIZE];
    char lname[SIZE];
};

struct shebao {
    char num[SIZE];
    struct fmlname name;
};

void print_a(struct shebao sb[3]);
void print_b(struct shebao *p);

int main(void)
{
    struct shebao *p;

    struct shebao sb[3] =
    {
        {"123456", {"A", "B", "C"}},
        {"654321", {"D", "", "F"}},
        {"999777", {"G", "H", "I"}}
    };
    p = sb;

    print_a(sb);
    printf("\n");
    print_b(p);

    system("pause");
    return 0;
}

void print_a(struct shebao sb[3])
{
    int i;

    for (i = 0; i < 3; i++)
    {
        if (sb[i].name.mname[0] == '\0')                    //检查中间名第一个字母是否为空
            printf("%s, %s -- %s\n", sb[i].name.fname, sb[i].name.lname, sb[i].num);
        else
            printf("%s, %s %c. -- %s\n", sb[i].name.fname, sb[i].name.lname, sb[i].name.mname[0], sb[i].num);
    }
}

void print_b(struct shebao *p)
{
    int i;

    for (i = 0; i < 3; i++, p++)
    {
        if (p->name.mname[0] == '\0')                       //检查中间名第一个字母是否为空
            printf("%s, %s -- %s\n", p->name.fname, p->name.lname, p->num);
        else
            printf("%s, %s %c. -- %s\n", p->name.fname, p->name.lname, p->name.mname[0], p->num);
    }
}
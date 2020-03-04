#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <windows.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
char *s_gets(char *st, int n);

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
    int flag;
};

int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index, filecount;
    FILE *pbooks;
    int size = sizeof(struct book);
    int num;
    char ch;
    int i;

    if ((pbooks = fopen("book.dat", "r+b")) == NULL)
    {
        fputs("Can't open book.dat file\n", stderr);
        exit(1);
    }

    rewind(pbooks);
    while (count <  MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
    {
        if (count == 0)
            puts("Current contens of book.dat:");
        printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
        count++;
    }
    filecount = count;
    if (count == MAXBKS)
    {
        fputs("The book.dat file is full.", stderr);
        exit(2);
    }

    puts("Please add new book titles.");
    puts("Press [enter] at the start of a line to stop.");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        puts("Now enter the author.");
        s_gets(library[count].author, MAXAUTL);
        puts("Now enter the value.");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            puts("Enter the next title.");
    }

    if (count > 0)
    {
        puts("Here is the list of your books:");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
        fwrite(&library[filecount], size, count - filecount, pbooks);
    }
    else
        puts("No books? Too bad.\n");


    printf("Enter a number of book do you want to delete or change (< 0 to quit):\n");
    scanf("%d", &num);
    while (num >= 0)
    {
        printf("Enter D to delete or C to change:\n");
        scanf("%c", &ch);
        if (ch == 'D' || ch == 'd')
        {
            library[num - 1].flag = 1;
            printf("You deleted it.\n");
        }
        if (ch == 'C' || ch == 'c')
        {
            printf("Enter the book title:\n");
            s_gets(library[num - 1].title, MAXTITL);
            printf("Enter the author:\n");
            s_gets(library[num - 1].author, MAXAUTL);
            printf("Enter the value:\n");
            scanf("%f", &library[num - 1].value);
            while (getchar() != '\n')
                continue;
        }

        printf("Enter a number of book do you want to delete or change (< 0 to quit):\n");
        scanf("%d", &num);
    }
    fclose(pbooks);

    if ((pbooks = fopen("book.dat", "w")) == NULL)
    {
        fputs("Can't open the file book.dat\n", stderr);
        exit(EXIT_FAILURE);
    }
    for (i = 0; i < count; i++)
    {
        if (library[i].flag != 1)
            fwrite(&library[i], size, 1, pbooks);
    }

    puts("Bye.\n");
    fclose(pbooks);

    system("pause");
    return 0;
}

char * s_gets(char * st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define SIZE 20

typedef struct {
    int number;
    char fname[SIZE];
    char lname[SIZE];
    int play_times;
    int hit_times;
    int walk_times;
    int point_times;
    float rate;
} baseball;

int main(void)
{
    FILE *fp;
    baseball *pt = 0;
    baseball player;
    int count = 0;
    int flag;
    int i;

    if ((fp = fopen("xxx", "r")) == NULL)
    {
        puts("Can't open.\n");
        exit(EXIT_FAILURE);
    }

    
    while (fscanf(fp, "%d %s %s %d %d %d %d\n", &player.number, player.fname, player.lname, &player.play_times, &player.hit_times, &player.walk_times, &player.point_times) != EOF)
    {
        flag = 0;

        for (i = 0; i < count; i++)
        {
            if (pt[i].number == player.number)
            {
                flag = 1;
                pt[i].play_times += player.play_times;
                pt[i].hit_times += player.hit_times;
                pt[i].walk_times += player.walk_times;
                pt[i].point_times += player.hit_times;
                pt[i].rate = (double)pt[i].hit_times / (double)pt[i].play_times;
            }
        }

        if (flag == 0)
        {
            if (count == 0)
                pt = (baseball *)malloc(sizeof(baseball) * ++count);
            else
                pt = (baseball *)realloc(pt, sizeof(baseball) * ++count);

            pt[count - 1] = player;
            pt[count - 1].hit_times = (double)pt[count - 1].hit_times / (double)pt[count - 1].play_times;
        }

        for (i = 0; i < count; i++)
        {
            printf("%-10d %-10s %-10s %-10d %-10d %-10d %-10d %10.2f\n", pt[i].number, pt[i].fname, pt[i].lname, pt[i].play_times, pt[i].hit_times, pt[i].walk_times, pt[i].point_times, pt[i].rate);
        }
    }

    fclose(fp);
    free(pt);

    system("pause");
    return 0;
}
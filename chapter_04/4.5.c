#include <stdio.h>
#include <windows.h>

int main(void)
{
    float downloadspeed;
    float filesize;
    float time;

    printf("What's the download speed(Mb/s):");
    scanf("%f", &downloadspeed);
    printf("What's size of file(MB):");
    scanf("%f", &filesize);
    time = filesize * 8 / downloadspeed;
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n", downloadspeed, filesize, time);
    
    system("pause");
    return 0;
}
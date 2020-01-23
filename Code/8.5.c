#include <stdio.h>
#include <ctype.h>
#include <windows.h>

int main(void)
{
    int guess = 50;
    int upper = 100;
    int lower = 0;
    char ch;

    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a y if my guess is right and with an n if it is wrong.\n");
    printf("Uh...is your numer %d?\n", guess);
    
    while ((ch = getchar()))                                //接受所有字符输入
    {
        if (!isalpha(ch))                                   //不是字母，进入下一次循环
            continue; 
        while (getchar() != '\n');                          //丢掉后面所有字符（只处理首字母）

        if (tolower(ch) == 'y')
            break;                                          //猜对了，退出

        printf("OK, the number you chosen is bigger or smaller than i guest? (b/s): ");
        while ((ch = getchar()))
        {
            if (!isalpha(ch))                                   //不是字母，进入下一次循环
            continue; 
            while (getchar() != '\n');                          //丢掉后面所有字符（只处理首字母）
        
            switch (tolower(ch))
            {
                case 'b':                                       //猜大了缩小一半
                    upper = guess;
                    guess -= ((upper - lower) / 2);
                    break;
                case 's':                                       //猜小了增加一半
                    lower = guess;
                    guess += ((upper - lower) / 2);
                    break;
                default:
                    printf("Invalid choice, the number you chose is bigger or smaller than i guest? (b/s): ");
                    continue;
            }
            break;
        }
        printf("Well, then, is it %d?\n", ++guess);
    }
    printf("I knew i could do it!\n");

    system("pause");
    return 0;
}

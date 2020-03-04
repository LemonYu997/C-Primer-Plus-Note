#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

int main(void)
{
    char ch;
    int word, wordsnum, upnum, lownum, punctnum, numbers;
    word = wordsnum = upnum = lownum = punctnum = numbers = 0;

    printf("Enter a string:\n");
    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))                    //如果是字母，word值用来判断是否是一个新的单词
        {
            if (word == 0)                  //开始计算，单词数加1                                    
            {
                wordsnum++;
                word = 1;
            }
        }
        else                                //当前字符不为字母时，重置word值
            word = 0;                       

        if (isupper(ch))
            upnum++;
        
        if (islower(ch))
            lownum++;
        
        if (ispunct(ch))
            punctnum++;
        
        if (isdigit(ch))
            numbers++;
    }

    printf("wodsnum: %d\n", wordsnum);
    printf("uppernum: %d\n", upnum);
    printf("lowernum: %d\n", lownum);
    printf("punctnum: %d\n", punctnum);
    printf("numbers: %d\n", numbers);

    system("pause");
    return 0;
}
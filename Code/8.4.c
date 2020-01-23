//在遇到EOF前，把输入作为字符流读取。报告平均每个单词的字母数。不要把空白统计为单词的字母。
/*
通过前一个字符和当前字符判断是否是一个单词有三种情况
no         prev        current          result          action
1           0           1               单词结束            n_char++
2           1           1               单词中              n_char++
3           1           0               单词结束            n_word++

在只计算字符总数和单词总数的情况下，no1和no2简化合并为一个语句，只判断当前字符是不是字母。
    当前字符不是字母时，前一个字符只有两种情况，是或不是，如果是表示单词结束
    如果不是，表示还未接收到单词，不用考虑。
*/

#include <stdio.h>
#include <ctype.h>
#include <windows.h>

int main(void)
{
    char prev, ch;                  //前一个字符和当前字符
    int n_char, n_word;             //字符数量和单词数量
    n_char = n_word = 0;
    float aver;

    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))            //如果当前字符是字母
            n_char++;
        else if (isalpha(prev))     //如果前一个字符是字母
            n_word++;
        prev = ch;
    }
    aver = n_char / n_word;

    printf("Total words: %d, total characters: %d, characters per word: %.2f.\n", n_word, n_char, aver);

    system("pause");
    return 0;
}
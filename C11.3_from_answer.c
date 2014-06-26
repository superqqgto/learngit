#include <stdio.h>
#include <ctype.h>
char * getword(char input[]);
int main()
{
    char input[80];

    while (getword(input) != NULL)
        puts(input);
    puts("done!");
    return 0;
}

char * getword(char * input1)
{
    char ch;
    while ((ch = getchar()) != EOF&& !isspace(ch))
        *input1++ = ch;
    *input1 = '\0';
    if (ch == EOF)
        //按ctrl D的时候就出现
        return NULL;
    else
    {
        while (ch != '\n')
            ch = getchar();
        //没有这个截止，全部都输出而不只是输出第一个单词
        //它不断循环，有多少吃多少
    }

    return input1;
}

//char * first_word_to_array(char tar[], char src[]);
//int main()
//{
//    char input_array[80], show_array[80];
//    printf("pls input some words\n");
//    gets(input_array);
//    printf("ok, show them\n");
////    first_word_to_array(show_array, input_array);
////    puts(show_array);
//
//
//    return 0;
//}
//
//char * first_word_to_array(char tar[], char src[])
//{
//    int i = 0;
//    printf("dfdf\n");
//    while (src[i] != ' ' || '\n' || '\t')
//    {
//        tar[i] = src[i];
//        putchar(tar[i]);
//        i++;
//    }
//    tar[i] = '\0';
//    return tar;
//}

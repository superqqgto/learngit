#include <stdio.h>
#include <ctype.h>
char * first_word_to_array(char tar[], char src[]);
int main()
{
    char input_array[80], show_array[80];
    printf("pls input some words\n");
    gets(input_array);
    printf("ok, show them\n");
    first_word_to_array(show_array, input_array);
    return 0;
}

char * first_word_to_array(char tar[], char src[])
{
    int i = 0;
    while (!isspace(src[i]))
    {
        tar[i] = src[i];
        putchar(tar[i]);
        i++;
    }
    tar[i] = '\0';

    return tar;
}

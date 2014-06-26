#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    char c;
    int word_cn = 0;
    int dot_cn = 0;
    int digi_cn = 0;
    int upp_cn = 0;
    int low_cn = 0;
    bool inword =false;

    while ((c = getchar()) != EOF)
    {
        if(islower(c))
            low_cn++;
        else if (isupper(c))
            upp_cn++;
        else if (isdigit(c))
            digi_cn++;
        else if (ispunct(c))
            dot_cn++;
        if (!isspace(c) && !inword)
        {
            inword = true;
            word_cn++;
        }
        if (isspace(c) && inword)
            inword = false;
    }
    printf("lower: %d\n", low_cn);
    printf("upper: %d\n", upp_cn);
    printf("digit: %d\n", digi_cn);
    printf("dot: %d\n", dot_cn);
    printf("word: %d\n", word_cn);
   return 0;
}

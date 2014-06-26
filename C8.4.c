#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    char ch;
    int words = 0;
    int n_words = 0;
    bool inwords = false;
    while((ch = getchar()) != EOF)
    {
        if(!ispunct(ch) && (!isspace(ch)))
            words++;
        if(!isspace(ch) && !inwords) 
        {
            inwords = true;
            n_words++;
        }
        if(isspace(ch) && inwords)
            inwords = false;
    }
    printf("%d character read.\n", words);
    printf("%d words read.\n", n_words);
    printf("the average number of letters per word is %f.\n", (float)words/(float)n_words);
    return 0;
}

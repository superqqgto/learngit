#include <stdio.h>
#include <ctype.h>
int words(char * a);
int dot(char * a);
int upper(char * a);
int lower(char * a);
int digit(char * a);
int main()
{
    char input[80], c;
    int i = 0;
//    gets(input);
    while ((c = getchar()) != '\n')
    {
       if ((c = getchar()) != EOF)
           puts("out\n");
        *(input+i) = c;
        i++;
    }
    *(input+i) = '\0';
    printf("words%d\n", words(input));
     printf("dot%d\n", dot(input));
     printf("upper%d\n", upper(input));
     printf("lower%d\n", lower(input));
     printf("digit%d\n", digit(input));

    return 0;
}

int words(char * a)
{
    int cn = 1;
    int i = 0;
    while (*(a+i) != '\0' && *(a+i) != EOF )
    {
        if (isspace(*(a+i)))
        {
            cn++;
        }
            i++;
     }
    return cn;
}

int dot(char * a)
{
    int cn = 0;
    int i = 0;
     while (*(a+i) != '\0')
    {
        if (ispunct(*(a+i)))
        {
            cn++;
        }
            i++;
     }
    return cn;
}
int upper(char * a)
{
    int cn = 0;
    int i = 0;
      while (*(a+i) != '\0')
    {
        if (isupper(*(a+i)))
        {
            cn++;
        }
            i++;
     }
    return cn;
}
int lower(char * a)
{
    int cn = 0;
    int i = 0;
       while (*(a+i) != '\0')
    {
        if (islower(*(a+i)))
        {
            cn++;
        }
            i++;
     }
    return cn;
}
int digit(char * a)
{
    int cn = 0;
    int i = 0;
     while (*(a+i) != '\0')
    {
        if (isdigit(*(a+i)))
        {
            cn++;
        }
            i++;
     }
    return cn;
}

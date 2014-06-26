#include <stdio.h>
#define LEN 80
char * getnchar (char * str, int n);
int main()
{
    char input[LEN];
    char *chk;

    chk = getnchar(input, LEN - 40);
    if (chk == NULL)
        puts("input failed.");
    else
        puts(input);
    puts("done.\n");
    return 0;
}

char * getnchar(char * str, int n)
{
    int i;
    int ch;

    for (i = 0; i < n; i++)
    {
        ch = getchar();
        if (ch != EOF)
            str[i] = ch;
        else
            break;   //如果没有这句话，那么如果中间出现了EOF它还会继续循环
    }
    if (ch == EOF)
        return NULL;
    else 
    {
        str[i] = '\0';
        return str;     
    }
}

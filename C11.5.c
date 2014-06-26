#include <stdio.h>

int within(char a, char *str);
int main()
{
    char input[80];
    char ch;
    int result;

    printf("input a string:\n");
    while (gets(input) && input[0] != '\0')
    {
        printf("input a character:\n");
        ch = getchar();
        result = within(ch, input);
        if (result == 0)
            printf("nothing found\n");
        else 
            printf("it's in it\n");
    }
    return 0;
}

int within(char a, char *str)
{
    while(*str != a && *str != '\0')
        *str++;
    return *str;
}

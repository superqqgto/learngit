#include <stdio.h>
void put1(const char *);
int put2(const char *);

int main(void)
{
    put1("if I'd as much money");
    put1("as I could spend,\n");
    printf("I count %s characters.\n",
            "I never would cry old chairs to mend.");
    //后面字符串要不要括号都可以
    return 0;
}
void put1(const char * string)
{
    while (*string)
        putchar(*string++);
}

int put2(const char * string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return(count);
}

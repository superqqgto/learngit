#include <stdio.h>
#define LEN 81
int drop_space(char *s);
int main()
{
    char orig[LEN];
    while (gets(orig) && orig[0] != '\0')
    {
        drop_space(orig);
        puts(orig);
    }
    puts("bye");
    return 0;
}
int drop_space(char * s)
{
    int ct = 0;
    char * pos;
    while (*s)
    {
        if (*s == ' ')
        {
            pos = s;  
            //两者地址一样了，所以最后输出*s也改变
            do
            {
                *pos = *(pos + 1);
                pos++;
            } while (*pos);
        }
        else
            s++;
    }
}

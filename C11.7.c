#include <stdio.h>
#include <string.h>
char * string_in (char * str1, char * str2);
int main()
{
    char str1[80], str2[80];
    printf("pls input string into str1:\n");
    gets(str1);
    printf("pls input string into str2:\n");
    gets(str2);
//    str3 = string_in(str1, str2);
    printf("%s", string_in(str1, str2));
    return 0;
}

#include <ctype.h>
char * string_in (char * str1, char * str2)
{
//    int l1 = strlen(str1);
//    int l2 = strlen(str2);
//    int l3;
//    l3 = l1 + 1 -l2;
    int n;
    if(*str2)
    {
        while (*str1)
        {
            for (n = 0; *(str1+n) == *(str2+n); n++)
            {
                if (!*(str2+n+1))
                    return str1;
            }
            str1++;
        }
        return NULL; 
    }
        return NULL; 
}

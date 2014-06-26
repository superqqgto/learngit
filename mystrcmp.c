#include <stdio.h>
int mystrcmp(char *, char *);
int main()
{
    char array1[20] = {"12345"};
    char array2[20] = {"1BCDE"}; 
    char array3[20] = {"ABCDE"}; 

    printf("array1:%s\n", array1);
    printf("array2:%s\n", array2);
    printf("array3:%s\n", array3);
   printf("array4 : %d\n", mystrcmp(array1,array3));
   printf("array5 : %d\n", strcmp(array3,array2));
    return 0;
}

int mystrcmp(char *s1, char *s2)
{
    int i;
    while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))
    {
        s1++;
        s2++;
    }
    if (*s1 != *s2)
    {
        i = *s1 - *s2;
        return i;
    }
    else
        return 0 ; 
}

int strcmp(const char *str1, const char *str2)
{
    while(*str1 == *str2)
    {
        if(*str1 == '\0') 
            return 0;
        str1++;
        str2++;
    }
    return *str1-*str2;
}

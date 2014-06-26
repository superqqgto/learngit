#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char *mystrstr(char *, char *);
int main()
{
    char array1[] = {"121345"};
    char array2[] = {"13"}; 
   printf("array1:%s\n", array1);
    printf("array2:%s\n", array2);
    printf("array : %s\n", mystrstr(array1,array2));
    return 0;
}
char *mystrstr(char *dest, char *src)
{
    bool strmatch = false; 
    int r = strlen(src);
    while ((*dest != *src) && (*dest != '\0') && (!strmatch))
    {
        dest++;
        while ((*src == *dest) && (*src != '\0'))
        {
            strmatch = true;
            src++;
            dest++;
        }
    }
        if ((*src == '\0') && (strmatch))
            return (dest-r);
        else 
            return NULL;
}

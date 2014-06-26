#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char *mystrstr(char *, char *, int n);
int main()
{
    char array1[] = {"12abcdef2345"};
    char array2[] = {"23"}; 
   printf("array1:%s\n", array1);
    printf("array2:%s\n", array2);
    printf("array : %s\n", mystrstr(array1, array2, 1));
    printf("array : %s\n", strstr(array1, array2));
    return 0;
}
char *mystrstr(char *dest, char *src, int n)
{
    bool strmatch = false; 
    int r = strlen(src);
    char *temp = src;
    while (*(dest+n-1) != '\0')
    { 
        if ((*(dest+n-1) != *src) && (!strmatch))
        {
            printf("aaa%c\n", *(dest+n-1));
             dest++;
        }
        else if ((*src == *(dest+n-1)) && (*src != '\0'))
        {
            strmatch = true;
            src++;
            dest++;
           if(*src == '\0')
               break;
           else if (*src != *(dest+n-1)) 
            {
                strmatch = false;
                src =temp;
            }
       }
    }
        if (*src == '\0') 
            return ((dest+n-1)-r);
        else 
            return NULL;
}

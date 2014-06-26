#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char *mystrstr(char *, char *);
int main()
{
    char array1[] = {"12345"};
    char array2[] = {"3"}; 
//    mystrstr(array1,array2);
    bool strmatch = false; 
//    int r = strlen(array2);/*{{{*/
//    printf("array : %s\n", strstr(array1,array2));
    int i, j;
//    strstr(array1, array2);
//    for (i = j = 0; i <= 5; i++)
//    {
//        if ((array1[i] != array2[j]) && (array1[i] != '\0') && (!strmatch))
//        {
//            printf("aaaaai:%d\n", i);
//        }
//        else if ((array2[j] == array1[i]) && (array2[j] != '\0'))
//        {
//            strmatch = true;
//            printf("bbbi:%d\n", i);
//            j++;
//        }
//        else if (array2[j] == '\0')
//        {
//            printf("ccci:%d\n", i);
//            break;
//        }
//    }
//    printf("r:%d\n", r);/*{{{*/
//    printf("i:%d\n", i);/*}}}*/
    printf("array1:%s\n", array1);
    printf("array2:%s\n", array2);
//    printf("array:%c\n", array1[i-r]);
    printf("array : %s\n", mystrstr(array1,array2));
    return 0;
}
/*}}}*/
char *mystrstr(char *dest, char *src)
{
    bool strmatch = false; 
    int r = strlen(src);
    while ((*dest != *src) && (*dest != '\0') && (!strmatch))
    {
//    if ((*dest != *src) && (*dest != '\0') && (!strmatch))
//    {
//        printf("aa%x\n", dest);
        dest++;
//    }
//    if ((*src == *dest) && (*src != '\0'))
    while ((*src == *dest) && (*src != '\0'))
    {
        strmatch = true;
//        printf("bb%x\n", dest);
//        printf("cc%x\n", src);
        src++;
        dest++;
    }
    if ((*src == '\0') && (strmatch))
    {
        return (dest-r);
//        printf("dd%x\n", dest-r);
//        printf("dd%x\n", src);
    }
//    else 
//        return NULL;
    }
}

#include <stdio.h>
char *mystrcat(char *, char *);
// int *mystrcat(char *, char *);
// 之前老有警告就因为这个。
int main()
{
    char array1[20] = {"12345"};
    char array2[20] = {"1BCDE"}; 
    char array3[20] = {};
//    printf("array : %s\n", strcat(array1,array2));
    printf("array1:%s\n", array1);
    printf("array2:%s\n", array2);
    printf("array : %s\n", mystrcat(array3,array2));
    return 0;
}

char *mystrcat(char *dest, char *src)
{
    char *r = dest;
    while (*dest != '\0')
        dest++;
    while (*dest++ = *src++);
//    for ( ; *src != '\0'; src++, dest++) 
//        *dest = *src;
    return r; 
}

char *strcat(char *strDest, const char *strSrc)
{
    char *address = strDest;
    assert((strDest != NULL) && (strSrc != NULL));
//对源地址和目的地址加非0断言
    while (*strDest)
    {
        strDest++; 
    }
    while (*strDest++ = *strSrc++)
    {
        NULL; 
    }
    return address;

}

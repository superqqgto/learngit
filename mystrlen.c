#include <stdio.h>
int mystrlen(char *);
int main()
{
    char array1[20] = {"12345"};
    char array2[20] = {"1BCDE"}; 
    printf("array1:%s\n", array1);
    printf("array2:%s\n", array2);
    printf("array : %d\n", mystrlen(array1));
    return 0;
}

int mystrlen(char *s)
{
    int n ;
//    while (*dest != '\0')
//        *dest++;
//    while (*dest++ = *src++);
    for (n = 1 ; *s != '\0'; s++, n++) 
        ;
    return n-1; 
}

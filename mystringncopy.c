#include <stdio.h>

char* mystringncopy(char *, char *, int );
int main()
{
    char array1[20] = {"ABCDE"}; 
    char array2[20] = {"12345"};
    char array[20];
    mystringncopy(array2, array1, 3);
    printf("array1 : %s\n", array2);
    printf("%s\n", mystringncopy(array2, array1, 3));
    return 0;
}

char* mystringncopy(char *dest, char *src, int n)
{
    int i;
    for (i = 0; (i <= n-1) && (*(src+i) != '\0'); i++)
    {
            *(dest+i) = *(src+i); 
    }
    return dest;

}

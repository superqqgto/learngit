#include <stdio.h>
char * getnchar(char *a, int n);
int main()
{
    char * ptr;
    char str[80];

    ptr = getnchar(str, 6);
    if ( ptr == NULL )
        puts("wrong!");
    else
        puts(ptr);
    return 0;

}

char * getnchar(char *a, int n)
{
    char ch;
    int i;
    for (i = 0; i < n; i++)
    {
        ch = getchar();
        if (ch != EOF && ch != '\n')
            *(a+i) = ch;
    }
    if  (ch == EOF) 
        return NULL; 
    else     
//        *(a+i) = ch;
        *(a+i) = '\0';
    return a;
}
//#include <stdio.h>
//void getnchar(char a[],int n);
//int main()
//{
//    char arr[80];
//    getnchar(arr, 20);
//    puts(arr);
//    return 0;
//}
//
//void getnchar(char a[],int n)
//{
//    int i;
//    for (i = 0; i < n; i++)
//        *(a+i) = getchar();
//    return;
//}


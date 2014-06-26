#include <stdio.h>
int main()
{
    int ch;
    int n = 0;
    
    while ((ch = getchar()) != EOF)
    {
        putchar (ch); 
        n++; 
    }
    printf("the sum of character is :%d.\n", n);
    return 0;
}

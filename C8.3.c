#include <stdio.h>

int main ()
{
    int m = 0;
    int n = 0;
    char ch;
    while (( ch = getchar()) != EOF)
    {
        if((ch >= 65) && (ch <= 90)) 
            n++;
        if((ch >= 97) && (ch <= 122))
            m++;
    }
    printf("upper: %d", n);
    printf("upper: %d", m);
    return 0;
}

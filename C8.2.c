#include <stdio.h>
int main()
{
    int ch;
    int n = 0;
    while ((ch = getchar()) != EOF)
    {
        if ((ch >= ' ') || (ch == '\n') || (ch == '\t'))
            printf("%3c", ch);
        else
            printf("^%3c", ch+64);
//        printf("&");
//       putchar(ch);
        printf("%d ", ch);
        n++;
        if (n % 10 == 0)
            printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n = 10;
    printf("initially, n = %d\n", n);
    for (int n = 1; n < 3; n++)
        printf("loop 1: n = %d\n", n);
    printf("after loop 1, n = %d\n", n);
    for (int n = 1; n < 3; n++)
    {
        printf("loop 2 index n = %d\n", n);
        int n = 30;
        printf("ddddloop 2 n = %d\n", n);
        n++;
        printf("dffesdloop 2 n = %d\n", n);
    }
    printf("after loop 2 n = %d\n", n);
    return 0;
}

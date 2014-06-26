#include <stdio.h>
int main()
{
    int n, i, j, k;
    int array[20][20];
    printf("pls input a number:\n");
    scanf("%d", &n);
    for (i=0; i<=n-1; i++)
    {
        for(j=0; j<=n-1; j++)
        {
            if (i == 0 || i == n-1)
                printf("x");
            else if (i == 1 || i == n-2)
            {
                if (j == 0 || j == n-1)
                    printf("x");
                else
                    printf("y");
            }
            else
            {
                if (j == 0 || j == n-1)
                    printf("x");
                else if (j == 1 || j == n-2)
                    printf("y");
              else
                    for (k = 1; k <= 1; k ++)
                    printf("%d", i-1);
            }
 
        }
        printf("\n"); 
    }
    return 0;
}

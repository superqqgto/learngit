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
              if ((i > 1 && i < n-2) && (j >1 && j < n-2))
                      printf("%d", i-1);
              else if ((i > 0 && i < n-1) && (j > 0 && j < n-1))
                    printf("y");
          else
              printf("x");
        }
        printf("\n"); 
    }
    return 0;
}

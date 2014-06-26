#include<stdio.h>
int main()
{
    int fibonacci[80];
    int i;
    
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(i = 2; i <=79; i++)
    {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2]; 
    }
    for(i = 0; i <=9; i++)
    {
        printf("%d ", fibonacci[i]); 
    }
    printf("\n");
    return 0;
}

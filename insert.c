#include<stdio.h>
#define N 5
int main()

{
    int i,j;
    int num[N+1] = {23, 45, 60, 67, 88}, in;

    printf("\n the element of the array before insert:");
    for(i=0; i<N; i++)
    {
        printf("%d ", num[i]); 
    }

    printf("\n pls a number you wanna insert:");
    scanf("%d", &in);
    for(i=0; i<N; i++)
    {
        if(num[i] > in) 
            break;
    }

    for(j=N; j>i; j--)
    {
        num[j] = num[j-1]; 
    }
    
    num[i] = in;
    printf("\n the number afer insert:\n");

    for(i=0; i<N+1; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}

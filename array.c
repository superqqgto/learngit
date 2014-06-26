#include<stdio.h>
int main()
{
    int array[5], i;

    array[1] = 1;
    array[2] = 2;
    for(i=0; i<=4; i++)
    {
        printf("array[%d] = %d", i, array[i]); 
    }
    return 0;
}

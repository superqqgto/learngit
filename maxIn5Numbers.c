#include<stdio.h>
int find_larg(int *);
int main()
{
    int arr1[5];
    int i, larg_num;
    printf("\n pls input 5 numberss:\n");
    for(i = 0; i <= 4; i++)
    {
        scanf("%d", &arr1[i]); 
    }
    larg_num = find_larg(arr1);
    printf("\n the largest number is %d\n", larg_num);
    return 0;
}
int find_larg(int *ptr)
{
    int larg = *ptr;
    int i;
    ptr++;
    for(i = 1; i <= 4; i++)
    {
        if(larg < *ptr) 
        {
            larg = *ptr; 
        }
        ptr++; 
    }
    return larg;
}

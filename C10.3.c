#include <stdio.h>
#define MAX 20
int  max1(int a[]);
int main()
{
    int array[MAX] = {1,2,3,4,5,6,7,7,8,9,9,0};
    int num, i;
    num = max1(array);
    //num = max1(array[]) 会报错；
    printf("the largest_num is %d\n", num);
    return 0;
}

int  max1(int a[])
{
    int i ; 
    int temp = a[0];
    for (i = 0 ; i < MAX; i++)
        if (temp < a[i+1])
            temp = a[i+1];
    return temp;
}

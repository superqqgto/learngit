#include <stdio.h>
#define MAX 20
int  max1(int a[]);
int main()
{
    int array[MAX] = {1,2,3,4,5,6,7,7,8,9,9,0};
    int num, i;
//    num = max1(array);
    //num = max1(array[]) 会报错；
 //   for (i=0; i < MAX; i++)
        printf("the index is %d\n", max1(array));
//    printf("the largest_num is %d\n", num);
    return 0;
}

int  max1(int a[])
{
    int i, j; 
    int temp = a[0];
    int b[MAX];
    for (i = 1 ; i < MAX; i++)
        if (temp < a[i])
            temp = a[i];
    for (i = 0, j = 0; i < MAX; i++)
        if (temp == a[i])
        {
            b[j] = i;
            j ++;
        }
    return b[MAX];
}

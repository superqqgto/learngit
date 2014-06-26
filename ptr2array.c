#include<stdio.h>

int main()
{
    int data[] = {5, 10, 15, 20, 25};
    int i = 0;
    int *ptr;
    ptr = data;

    while(i<5)
    {
        printf("\n the %d element's address is %x, the value of varible is %d\n", i, ptr, *ptr); 
        i++;
        ptr++;
    }
    return 0;
}

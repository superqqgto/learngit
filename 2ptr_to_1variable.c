#include<stdio.h>

int main()
{
    int num1 = 100;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    printf("\n num1's address is%x", ptr1);
    ptr2 = ptr1;
    printf("\n ptr2's value is %x\n", ptr2);
    printf("\n ptr2's value is %x\n", *ptr2);
    printf("\n ptr2's value is %d\n", *ptr2);
    printf("\n ptr2's value is %x\n", &ptr2);
    printf("\n ptr2's value is %x\n", &num1);
    printf("\n ptr2's value is %x\n", &ptr1);
    return 0;
}

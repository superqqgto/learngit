#include<stdio.h>

int main()
{
    int num1 = 50, num2 = 100;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    
    printf("the value of num1 is %d", *ptr1);
    printf("\n the address of num1 is %x\n", ptr1); 
    ptr2 = &num2;
    printf("\n the value of num2 is %d ", *ptr2);
    printf("\n num2's address is: %x\n", ptr2);
    *ptr2 = *ptr1;
    printf("\n the value after reassign is: %d\n", *ptr2);
    printf("\n the address after reassign is: %x\n", ptr2);
    return 0;
}

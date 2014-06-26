#include<stdio.h>

void increment(int*, int*);
int main()
{
    int num1, num2;
    printf("\n pls input 2 number:");
    scanf("%d %d", &num1, &num2);
    printf("\n the value before increasing is %d and %d\n", num1, num2);
    increment(&num1, &num2);
    printf("\n the value after increasing is %d and %d\n", num1, num2);
    return 0;
}

void increment(int *ptr1, int *ptr2)
{
    (*ptr1)++;
    (*ptr2)++;
    printf("\n the value in the subfunction is %d and %d.\n", *ptr1, *ptr2);
}
